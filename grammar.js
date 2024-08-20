/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'factorio_changelog',

  rules: {
    source_file: $ => repeat($.version_changelog),

    version_changelog: $ => seq(
      $.delimeter,
      $.version,
      $.date,
      $.changes_body,
    ),

    delimeter: $ => token(/-{99}/),

    version: $ => seq(
      'Version: ',
      field('version', $.version_literal),
    ),

    version_literal: $ => /[0-9]+\.[0-9]+\.[0-9]+/,

    date: $ => seq(
      'Date: ',
      field('date', $.date_literal),
    ),

    date_literal: $ => choice(
      $._date_iso8601,
      $._date_american,
      $._date_european,
    ),

    _date_iso8601: $ => /[0-9]{2}?[0-9]{2}-[0-9]{2}-[0-9]{2}/,

    _date_american: $ => /[0-9]{2}\/[0-9]{2}\/[0-9]{2}?[0-9]{2}/,

    _date_european: $ => /[0-9]{2}\.[0-9]{2}\.[0-9]{2}?[0-9]{2}/,

    changes_body: $ => repeat1($.change_category),

    change_category: $ => seq(
      $.change_category_name,
      $.change_list
    ),

    change_category_name: $ => choice(
      'Major Features:',
      'Minor Features:',
      'Features:',
      'Graphics:',
      'Sounds:',
      'Optimisations:',
      'Optimizations:',
      'Combat Balancing:',
      'Balancing:',
      'Circuit Network:',
      'Changes:',
      'Bugfixes:',
      'Modding:',
      'Scripting:',
      'Gui:',
      'Control:',
      'Translation:',
      'Debug:',
      'Ease of use:',
      'Info:',
      'Locale:',
      'Other:',
      /[A-Z][a-zA-Z ]*:/
    ),

    change_list: $ => repeat1($.change_text),

    change_text: $ => seq(
      /    - .+/,
      repeat(/      .+/)
    ),
  }
});
