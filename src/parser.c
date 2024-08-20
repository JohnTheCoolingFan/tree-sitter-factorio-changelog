#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_delimeter = 1,
  anon_sym_Version_COLON = 2,
  sym_version_literal = 3,
  anon_sym_Date_COLON = 4,
  sym__date_iso8601 = 5,
  sym__date_american = 6,
  sym__date_european = 7,
  anon_sym_MajorFeatures_COLON = 8,
  anon_sym_MinorFeatures_COLON = 9,
  anon_sym_Features_COLON = 10,
  anon_sym_Graphics_COLON = 11,
  anon_sym_Sounds_COLON = 12,
  anon_sym_Optimisations_COLON = 13,
  anon_sym_Optimizations_COLON = 14,
  anon_sym_CombatBalancing_COLON = 15,
  anon_sym_Balancing_COLON = 16,
  anon_sym_CircuitNetwork_COLON = 17,
  anon_sym_Changes_COLON = 18,
  anon_sym_Bugfixes_COLON = 19,
  anon_sym_Modding_COLON = 20,
  anon_sym_Scripting_COLON = 21,
  anon_sym_Gui_COLON = 22,
  anon_sym_Control_COLON = 23,
  anon_sym_Translation_COLON = 24,
  anon_sym_Debug_COLON = 25,
  anon_sym_Easeofuse_COLON = 26,
  anon_sym_Info_COLON = 27,
  anon_sym_Locale_COLON = 28,
  anon_sym_Other_COLON = 29,
  aux_sym_change_category_name_token1 = 30,
  aux_sym_change_text_token1 = 31,
  aux_sym_change_text_token2 = 32,
  sym_source_file = 33,
  sym_version_changelog = 34,
  sym_version = 35,
  sym_date = 36,
  sym_date_literal = 37,
  sym_changes_body = 38,
  sym_change_category = 39,
  sym_change_category_name = 40,
  sym_change_list = 41,
  sym_change_text = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_changes_body_repeat1 = 44,
  aux_sym_change_list_repeat1 = 45,
  aux_sym_change_text_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_delimeter] = "delimeter",
  [anon_sym_Version_COLON] = "Version: ",
  [sym_version_literal] = "version_literal",
  [anon_sym_Date_COLON] = "Date: ",
  [sym__date_iso8601] = "_date_iso8601",
  [sym__date_american] = "_date_american",
  [sym__date_european] = "_date_european",
  [anon_sym_MajorFeatures_COLON] = "Major Features:",
  [anon_sym_MinorFeatures_COLON] = "Minor Features:",
  [anon_sym_Features_COLON] = "Features:",
  [anon_sym_Graphics_COLON] = "Graphics:",
  [anon_sym_Sounds_COLON] = "Sounds:",
  [anon_sym_Optimisations_COLON] = "Optimisations:",
  [anon_sym_Optimizations_COLON] = "Optimizations:",
  [anon_sym_CombatBalancing_COLON] = "Combat Balancing:",
  [anon_sym_Balancing_COLON] = "Balancing:",
  [anon_sym_CircuitNetwork_COLON] = "Circuit Network:",
  [anon_sym_Changes_COLON] = "Changes:",
  [anon_sym_Bugfixes_COLON] = "Bugfixes:",
  [anon_sym_Modding_COLON] = "Modding:",
  [anon_sym_Scripting_COLON] = "Scripting:",
  [anon_sym_Gui_COLON] = "Gui:",
  [anon_sym_Control_COLON] = "Control:",
  [anon_sym_Translation_COLON] = "Translation:",
  [anon_sym_Debug_COLON] = "Debug:",
  [anon_sym_Easeofuse_COLON] = "Ease of use:",
  [anon_sym_Info_COLON] = "Info:",
  [anon_sym_Locale_COLON] = "Locale:",
  [anon_sym_Other_COLON] = "Other:",
  [aux_sym_change_category_name_token1] = "change_category_name_token1",
  [aux_sym_change_text_token1] = "change_text_token1",
  [aux_sym_change_text_token2] = "change_text_token2",
  [sym_source_file] = "source_file",
  [sym_version_changelog] = "version_changelog",
  [sym_version] = "version",
  [sym_date] = "date",
  [sym_date_literal] = "date_literal",
  [sym_changes_body] = "changes_body",
  [sym_change_category] = "change_category",
  [sym_change_category_name] = "change_category_name",
  [sym_change_list] = "change_list",
  [sym_change_text] = "change_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_changes_body_repeat1] = "changes_body_repeat1",
  [aux_sym_change_list_repeat1] = "change_list_repeat1",
  [aux_sym_change_text_repeat1] = "change_text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_delimeter] = sym_delimeter,
  [anon_sym_Version_COLON] = anon_sym_Version_COLON,
  [sym_version_literal] = sym_version_literal,
  [anon_sym_Date_COLON] = anon_sym_Date_COLON,
  [sym__date_iso8601] = sym__date_iso8601,
  [sym__date_american] = sym__date_american,
  [sym__date_european] = sym__date_european,
  [anon_sym_MajorFeatures_COLON] = anon_sym_MajorFeatures_COLON,
  [anon_sym_MinorFeatures_COLON] = anon_sym_MinorFeatures_COLON,
  [anon_sym_Features_COLON] = anon_sym_Features_COLON,
  [anon_sym_Graphics_COLON] = anon_sym_Graphics_COLON,
  [anon_sym_Sounds_COLON] = anon_sym_Sounds_COLON,
  [anon_sym_Optimisations_COLON] = anon_sym_Optimisations_COLON,
  [anon_sym_Optimizations_COLON] = anon_sym_Optimizations_COLON,
  [anon_sym_CombatBalancing_COLON] = anon_sym_CombatBalancing_COLON,
  [anon_sym_Balancing_COLON] = anon_sym_Balancing_COLON,
  [anon_sym_CircuitNetwork_COLON] = anon_sym_CircuitNetwork_COLON,
  [anon_sym_Changes_COLON] = anon_sym_Changes_COLON,
  [anon_sym_Bugfixes_COLON] = anon_sym_Bugfixes_COLON,
  [anon_sym_Modding_COLON] = anon_sym_Modding_COLON,
  [anon_sym_Scripting_COLON] = anon_sym_Scripting_COLON,
  [anon_sym_Gui_COLON] = anon_sym_Gui_COLON,
  [anon_sym_Control_COLON] = anon_sym_Control_COLON,
  [anon_sym_Translation_COLON] = anon_sym_Translation_COLON,
  [anon_sym_Debug_COLON] = anon_sym_Debug_COLON,
  [anon_sym_Easeofuse_COLON] = anon_sym_Easeofuse_COLON,
  [anon_sym_Info_COLON] = anon_sym_Info_COLON,
  [anon_sym_Locale_COLON] = anon_sym_Locale_COLON,
  [anon_sym_Other_COLON] = anon_sym_Other_COLON,
  [aux_sym_change_category_name_token1] = aux_sym_change_category_name_token1,
  [aux_sym_change_text_token1] = aux_sym_change_text_token1,
  [aux_sym_change_text_token2] = aux_sym_change_text_token2,
  [sym_source_file] = sym_source_file,
  [sym_version_changelog] = sym_version_changelog,
  [sym_version] = sym_version,
  [sym_date] = sym_date,
  [sym_date_literal] = sym_date_literal,
  [sym_changes_body] = sym_changes_body,
  [sym_change_category] = sym_change_category,
  [sym_change_category_name] = sym_change_category_name,
  [sym_change_list] = sym_change_list,
  [sym_change_text] = sym_change_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_changes_body_repeat1] = aux_sym_changes_body_repeat1,
  [aux_sym_change_list_repeat1] = aux_sym_change_list_repeat1,
  [aux_sym_change_text_repeat1] = aux_sym_change_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_delimeter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Version_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_version_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Date_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__date_iso8601] = {
    .visible = false,
    .named = true,
  },
  [sym__date_american] = {
    .visible = false,
    .named = true,
  },
  [sym__date_european] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_MajorFeatures_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MinorFeatures_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Features_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Graphics_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sounds_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Optimisations_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Optimizations_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CombatBalancing_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Balancing_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CircuitNetwork_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Changes_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bugfixes_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Modding_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scripting_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Gui_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Control_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Translation_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Debug_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Easeofuse_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Info_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Locale_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Other_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_change_category_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_change_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_change_text_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_version_changelog] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_date_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_changes_body] = {
    .visible = true,
    .named = true,
  },
  [sym_change_category] = {
    .visible = true,
    .named = true,
  },
  [sym_change_category_name] = {
    .visible = true,
    .named = true,
  },
  [sym_change_list] = {
    .visible = true,
    .named = true,
  },
  [sym_change_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changes_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_change_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_change_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_date = 1,
  field_version = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_date] = "date",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 1},
  [1] =
    {field_date, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(344);
      ADVANCE_MAP(
        ' ', 19,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == 'B') ADVANCE(514);
      if (lookahead == 'C') ADVANCE(566);
      if (lookahead == 'D') ADVANCE(542);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'G') ADVANCE(623);
      if (lookahead == 'I') ADVANCE(592);
      if (lookahead == 'L') ADVANCE(606);
      if (lookahead == 'M') ADVANCE(516);
      if (lookahead == 'O') ADVANCE(616);
      if (lookahead == 'S') ADVANCE(533);
      if (lookahead == 'T') ADVANCE(626);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(665);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 19,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == ':') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == ':') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ':') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        ' ', 20,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        ' ', 1,
        '-', 3,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(349);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        ' ', 12,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        ' ', 12,
        '-', 3,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        ' ', 14,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        ' ', 8,
        '-', 3,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead == ':') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == ':') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        ' ', 11,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        ' ', 13,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        ' ', 17,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        ' ', 18,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == ':') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(332);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(332);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(334);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 123:
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '/') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 124:
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 126:
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == '/') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 129:
      if (lookahead == '.') ADVANCE(341);
      END_STATE();
    case 130:
      if (lookahead == '/') ADVANCE(340);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'B') ADVANCE(149);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(175);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(176);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'b') ADVANCE(277);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(279);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'g') ADVANCE(300);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'h') ADVANCE(195);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 201:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 202:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 203:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'j') ADVANCE(231);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 208:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 209:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 210:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 211:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 212:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 213:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 214:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 215:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 216:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 217:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 218:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 219:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 220:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 221:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 222:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 223:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 224:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 225:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 226:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 227:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 228:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 230:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 231:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 235:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 236:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 237:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 238:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 239:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 240:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 241:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 242:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 243:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 244:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 245:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 246:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(290);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 247:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 248:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 249:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 250:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 251:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 252:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 253:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 254:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 255:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 256:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 257:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 258:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 259:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 260:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 261:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 262:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 263:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 264:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 'z') ADVANCE(147);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(286);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(181);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'w') ADVANCE(233);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(381);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(391);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(395);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(361);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(359);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(369);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(379);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(389);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(385);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(355);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 311:
      if (lookahead == 'D') ADVANCE(312);
      if (lookahead == 'V') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 321:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 324:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 325:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 326:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 327:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 328:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 330:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 332:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 333:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 336:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 338:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 339:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 340:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 341:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 342:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(399);
      END_STATE();
    case 343:
      if (eof) ADVANCE(344);
      ADVANCE_MAP(
        ' ', 20,
        '-', 122,
        'B', 135,
        'C', 187,
        'D', 163,
        'E', 136,
        'F', 165,
        'G', 244,
        'I', 213,
        'L', 227,
        'M', 137,
        'O', 237,
        'S', 154,
        'T', 247,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(343);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(286);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_delimeter);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_delimeter);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_Version_COLON);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_version_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_Date_COLON);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__date_iso8601);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__date_american);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__date_european);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_MajorFeatures_COLON);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_MajorFeatures_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_MinorFeatures_COLON);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_MinorFeatures_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_Features_COLON);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_Features_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_Graphics_COLON);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_Graphics_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_Sounds_COLON);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_Sounds_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_Optimisations_COLON);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Optimisations_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Optimizations_COLON);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Optimizations_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_CombatBalancing_COLON);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_CombatBalancing_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_Balancing_COLON);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Balancing_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_CircuitNetwork_COLON);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_CircuitNetwork_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_Changes_COLON);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_Changes_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_Bugfixes_COLON);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_Bugfixes_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_Modding_COLON);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_Modding_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_Scripting_COLON);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_Scripting_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_Gui_COLON);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_Gui_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_Control_COLON);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Control_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_Translation_COLON);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_Translation_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_Debug_COLON);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_Debug_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_Easeofuse_COLON);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_Easeofuse_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_Info_COLON);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_Info_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_Locale_COLON);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_Locale_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_Other_COLON);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_Other_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_change_category_name_token1);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_change_category_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_change_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      ADVANCE_MAP(
        ' ', 400,
        '-', 405,
        'B', 514,
        'C', 566,
        'D', 542,
        'E', 515,
        'F', 544,
        'G', 623,
        'I', 592,
        'L', 606,
        'M', 516,
        'O', 616,
        'S', 533,
        'T', 626,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(689);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      ADVANCE_MAP(
        ' ', 400,
        '-', 412,
        'B', 514,
        'C', 566,
        'D', 542,
        'E', 515,
        'F', 544,
        'G', 623,
        'I', 592,
        'L', 606,
        'M', 516,
        'O', 616,
        'S', 533,
        'T', 626,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(689);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ' ') ADVANCE(511);
      if (lookahead == ':') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ' ') ADVANCE(510);
      if (lookahead == ':') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ' ') ADVANCE(513);
      if (lookahead == ':') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ' ') ADVANCE(688);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      ADVANCE_MAP(
        ' ', 401,
        '-', 412,
        'B', 514,
        'C', 566,
        'D', 542,
        'E', 515,
        'F', 544,
        'G', 623,
        'I', 592,
        'L', 606,
        'M', 516,
        'O', 616,
        'S', 533,
        'T', 626,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(689);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ' ') ADVANCE(609);
      if (lookahead == ':') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ' ') ADVANCE(660);
      if (lookahead == ':') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      ADVANCE_MAP(
        ' ', 406,
        '-', 412,
        'B', 514,
        'C', 566,
        'D', 542,
        'E', 515,
        'F', 544,
        'G', 623,
        'I', 592,
        'L', 606,
        'M', 516,
        'O', 616,
        'S', 533,
        'T', 626,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(689);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      ADVANCE_MAP(
        ' ', 409,
        '-', 412,
        'B', 514,
        'C', 566,
        'D', 542,
        'E', 515,
        'F', 544,
        'G', 623,
        'I', 592,
        'L', 606,
        'M', 516,
        'O', 616,
        'S', 533,
        'T', 626,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(689);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == ':') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(554);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(555);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(547);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(559);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(631);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(593);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(594);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(595);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(650);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'b') ADVANCE(656);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'b') ADVANCE(521);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(658);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(636);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'd') ADVANCE(632);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'd') ADVANCE(577);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(607);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(557);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(668);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(549);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(674);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(678);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(679);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(687);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(519);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'o') ADVANCE(590);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(574);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(664);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(666);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(611);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(600);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'j') ADVANCE(610);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'k') ADVANCE(686);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(673);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(556);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(537);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(540);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(681);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(563);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(538);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(667);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(597);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(602);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(630);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(645);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(568);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(653);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(669);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(553);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(411);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(671);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(675);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(677);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(685);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 'z') ADVANCE(526);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(624);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(560);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(596);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(575);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(627);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(628);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(629);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'w') ADVANCE(612);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 'x') ADVANCE(550);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(388);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(396);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(358);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(360);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(390);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(364);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(372);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead == ':') ADVANCE(368);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(399);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_change_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 343},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 343},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 343},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 311},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 311},
  [19] = {.lex_state = 311},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 311},
  [22] = {.lex_state = 321},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_delimeter] = ACTIONS(1),
    [sym_version_literal] = ACTIONS(1),
    [sym__date_iso8601] = ACTIONS(1),
    [sym__date_american] = ACTIONS(1),
    [sym__date_european] = ACTIONS(1),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(1),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(1),
    [anon_sym_Features_COLON] = ACTIONS(1),
    [anon_sym_Graphics_COLON] = ACTIONS(1),
    [anon_sym_Sounds_COLON] = ACTIONS(1),
    [anon_sym_Optimisations_COLON] = ACTIONS(1),
    [anon_sym_Optimizations_COLON] = ACTIONS(1),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(1),
    [anon_sym_Balancing_COLON] = ACTIONS(1),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(1),
    [anon_sym_Changes_COLON] = ACTIONS(1),
    [anon_sym_Bugfixes_COLON] = ACTIONS(1),
    [anon_sym_Modding_COLON] = ACTIONS(1),
    [anon_sym_Scripting_COLON] = ACTIONS(1),
    [anon_sym_Gui_COLON] = ACTIONS(1),
    [anon_sym_Control_COLON] = ACTIONS(1),
    [anon_sym_Translation_COLON] = ACTIONS(1),
    [anon_sym_Debug_COLON] = ACTIONS(1),
    [anon_sym_Easeofuse_COLON] = ACTIONS(1),
    [anon_sym_Info_COLON] = ACTIONS(1),
    [anon_sym_Locale_COLON] = ACTIONS(1),
    [anon_sym_Other_COLON] = ACTIONS(1),
    [aux_sym_change_category_name_token1] = ACTIONS(1),
    [aux_sym_change_text_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_version_changelog] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_delimeter] = ACTIONS(5),
  },
  [2] = {
    [aux_sym_change_text_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_delimeter] = ACTIONS(9),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(9),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(9),
    [anon_sym_Features_COLON] = ACTIONS(9),
    [anon_sym_Graphics_COLON] = ACTIONS(9),
    [anon_sym_Sounds_COLON] = ACTIONS(9),
    [anon_sym_Optimisations_COLON] = ACTIONS(9),
    [anon_sym_Optimizations_COLON] = ACTIONS(9),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(9),
    [anon_sym_Balancing_COLON] = ACTIONS(9),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(9),
    [anon_sym_Changes_COLON] = ACTIONS(9),
    [anon_sym_Bugfixes_COLON] = ACTIONS(9),
    [anon_sym_Modding_COLON] = ACTIONS(9),
    [anon_sym_Scripting_COLON] = ACTIONS(9),
    [anon_sym_Gui_COLON] = ACTIONS(9),
    [anon_sym_Control_COLON] = ACTIONS(9),
    [anon_sym_Translation_COLON] = ACTIONS(9),
    [anon_sym_Debug_COLON] = ACTIONS(9),
    [anon_sym_Easeofuse_COLON] = ACTIONS(9),
    [anon_sym_Info_COLON] = ACTIONS(9),
    [anon_sym_Locale_COLON] = ACTIONS(9),
    [anon_sym_Other_COLON] = ACTIONS(9),
    [aux_sym_change_category_name_token1] = ACTIONS(9),
    [aux_sym_change_text_token1] = ACTIONS(9),
    [aux_sym_change_text_token2] = ACTIONS(11),
  },
  [3] = {
    [sym_change_text] = STATE(3),
    [aux_sym_change_list_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(14),
    [sym_delimeter] = ACTIONS(14),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(14),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(14),
    [anon_sym_Features_COLON] = ACTIONS(14),
    [anon_sym_Graphics_COLON] = ACTIONS(14),
    [anon_sym_Sounds_COLON] = ACTIONS(14),
    [anon_sym_Optimisations_COLON] = ACTIONS(14),
    [anon_sym_Optimizations_COLON] = ACTIONS(14),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(14),
    [anon_sym_Balancing_COLON] = ACTIONS(14),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(14),
    [anon_sym_Changes_COLON] = ACTIONS(14),
    [anon_sym_Bugfixes_COLON] = ACTIONS(14),
    [anon_sym_Modding_COLON] = ACTIONS(14),
    [anon_sym_Scripting_COLON] = ACTIONS(14),
    [anon_sym_Gui_COLON] = ACTIONS(14),
    [anon_sym_Control_COLON] = ACTIONS(14),
    [anon_sym_Translation_COLON] = ACTIONS(14),
    [anon_sym_Debug_COLON] = ACTIONS(14),
    [anon_sym_Easeofuse_COLON] = ACTIONS(14),
    [anon_sym_Info_COLON] = ACTIONS(14),
    [anon_sym_Locale_COLON] = ACTIONS(14),
    [anon_sym_Other_COLON] = ACTIONS(14),
    [aux_sym_change_category_name_token1] = ACTIONS(16),
    [aux_sym_change_text_token1] = ACTIONS(18),
  },
  [4] = {
    [aux_sym_change_text_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_delimeter] = ACTIONS(23),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(23),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(23),
    [anon_sym_Features_COLON] = ACTIONS(23),
    [anon_sym_Graphics_COLON] = ACTIONS(23),
    [anon_sym_Sounds_COLON] = ACTIONS(23),
    [anon_sym_Optimisations_COLON] = ACTIONS(23),
    [anon_sym_Optimizations_COLON] = ACTIONS(23),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(23),
    [anon_sym_Balancing_COLON] = ACTIONS(23),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(23),
    [anon_sym_Changes_COLON] = ACTIONS(23),
    [anon_sym_Bugfixes_COLON] = ACTIONS(23),
    [anon_sym_Modding_COLON] = ACTIONS(23),
    [anon_sym_Scripting_COLON] = ACTIONS(23),
    [anon_sym_Gui_COLON] = ACTIONS(23),
    [anon_sym_Control_COLON] = ACTIONS(23),
    [anon_sym_Translation_COLON] = ACTIONS(23),
    [anon_sym_Debug_COLON] = ACTIONS(23),
    [anon_sym_Easeofuse_COLON] = ACTIONS(23),
    [anon_sym_Info_COLON] = ACTIONS(23),
    [anon_sym_Locale_COLON] = ACTIONS(23),
    [anon_sym_Other_COLON] = ACTIONS(23),
    [aux_sym_change_category_name_token1] = ACTIONS(23),
    [aux_sym_change_text_token1] = ACTIONS(23),
    [aux_sym_change_text_token2] = ACTIONS(25),
  },
  [5] = {
    [sym_change_category] = STATE(5),
    [sym_change_category_name] = STATE(13),
    [aux_sym_changes_body_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_delimeter] = ACTIONS(27),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(29),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(29),
    [anon_sym_Features_COLON] = ACTIONS(29),
    [anon_sym_Graphics_COLON] = ACTIONS(29),
    [anon_sym_Sounds_COLON] = ACTIONS(29),
    [anon_sym_Optimisations_COLON] = ACTIONS(29),
    [anon_sym_Optimizations_COLON] = ACTIONS(29),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(29),
    [anon_sym_Balancing_COLON] = ACTIONS(29),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(29),
    [anon_sym_Changes_COLON] = ACTIONS(29),
    [anon_sym_Bugfixes_COLON] = ACTIONS(29),
    [anon_sym_Modding_COLON] = ACTIONS(29),
    [anon_sym_Scripting_COLON] = ACTIONS(29),
    [anon_sym_Gui_COLON] = ACTIONS(29),
    [anon_sym_Control_COLON] = ACTIONS(29),
    [anon_sym_Translation_COLON] = ACTIONS(29),
    [anon_sym_Debug_COLON] = ACTIONS(29),
    [anon_sym_Easeofuse_COLON] = ACTIONS(29),
    [anon_sym_Info_COLON] = ACTIONS(29),
    [anon_sym_Locale_COLON] = ACTIONS(29),
    [anon_sym_Other_COLON] = ACTIONS(29),
    [aux_sym_change_category_name_token1] = ACTIONS(32),
  },
  [6] = {
    [sym_change_text] = STATE(3),
    [aux_sym_change_list_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_delimeter] = ACTIONS(35),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(35),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(35),
    [anon_sym_Features_COLON] = ACTIONS(35),
    [anon_sym_Graphics_COLON] = ACTIONS(35),
    [anon_sym_Sounds_COLON] = ACTIONS(35),
    [anon_sym_Optimisations_COLON] = ACTIONS(35),
    [anon_sym_Optimizations_COLON] = ACTIONS(35),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(35),
    [anon_sym_Balancing_COLON] = ACTIONS(35),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(35),
    [anon_sym_Changes_COLON] = ACTIONS(35),
    [anon_sym_Bugfixes_COLON] = ACTIONS(35),
    [anon_sym_Modding_COLON] = ACTIONS(35),
    [anon_sym_Scripting_COLON] = ACTIONS(35),
    [anon_sym_Gui_COLON] = ACTIONS(35),
    [anon_sym_Control_COLON] = ACTIONS(35),
    [anon_sym_Translation_COLON] = ACTIONS(35),
    [anon_sym_Debug_COLON] = ACTIONS(35),
    [anon_sym_Easeofuse_COLON] = ACTIONS(35),
    [anon_sym_Info_COLON] = ACTIONS(35),
    [anon_sym_Locale_COLON] = ACTIONS(35),
    [anon_sym_Other_COLON] = ACTIONS(35),
    [aux_sym_change_category_name_token1] = ACTIONS(37),
    [aux_sym_change_text_token1] = ACTIONS(39),
  },
  [7] = {
    [aux_sym_change_text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_delimeter] = ACTIONS(43),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(43),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(43),
    [anon_sym_Features_COLON] = ACTIONS(43),
    [anon_sym_Graphics_COLON] = ACTIONS(43),
    [anon_sym_Sounds_COLON] = ACTIONS(43),
    [anon_sym_Optimisations_COLON] = ACTIONS(43),
    [anon_sym_Optimizations_COLON] = ACTIONS(43),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(43),
    [anon_sym_Balancing_COLON] = ACTIONS(43),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(43),
    [anon_sym_Changes_COLON] = ACTIONS(43),
    [anon_sym_Bugfixes_COLON] = ACTIONS(43),
    [anon_sym_Modding_COLON] = ACTIONS(43),
    [anon_sym_Scripting_COLON] = ACTIONS(43),
    [anon_sym_Gui_COLON] = ACTIONS(43),
    [anon_sym_Control_COLON] = ACTIONS(43),
    [anon_sym_Translation_COLON] = ACTIONS(43),
    [anon_sym_Debug_COLON] = ACTIONS(43),
    [anon_sym_Easeofuse_COLON] = ACTIONS(43),
    [anon_sym_Info_COLON] = ACTIONS(43),
    [anon_sym_Locale_COLON] = ACTIONS(43),
    [anon_sym_Other_COLON] = ACTIONS(43),
    [aux_sym_change_category_name_token1] = ACTIONS(43),
    [aux_sym_change_text_token1] = ACTIONS(43),
    [aux_sym_change_text_token2] = ACTIONS(45),
  },
  [8] = {
    [sym_change_category] = STATE(5),
    [sym_change_category_name] = STATE(13),
    [aux_sym_changes_body_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_delimeter] = ACTIONS(47),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(49),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(49),
    [anon_sym_Features_COLON] = ACTIONS(49),
    [anon_sym_Graphics_COLON] = ACTIONS(49),
    [anon_sym_Sounds_COLON] = ACTIONS(49),
    [anon_sym_Optimisations_COLON] = ACTIONS(49),
    [anon_sym_Optimizations_COLON] = ACTIONS(49),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(49),
    [anon_sym_Balancing_COLON] = ACTIONS(49),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(49),
    [anon_sym_Changes_COLON] = ACTIONS(49),
    [anon_sym_Bugfixes_COLON] = ACTIONS(49),
    [anon_sym_Modding_COLON] = ACTIONS(49),
    [anon_sym_Scripting_COLON] = ACTIONS(49),
    [anon_sym_Gui_COLON] = ACTIONS(49),
    [anon_sym_Control_COLON] = ACTIONS(49),
    [anon_sym_Translation_COLON] = ACTIONS(49),
    [anon_sym_Debug_COLON] = ACTIONS(49),
    [anon_sym_Easeofuse_COLON] = ACTIONS(49),
    [anon_sym_Info_COLON] = ACTIONS(49),
    [anon_sym_Locale_COLON] = ACTIONS(49),
    [anon_sym_Other_COLON] = ACTIONS(49),
    [aux_sym_change_category_name_token1] = ACTIONS(51),
  },
  [9] = {
    [sym_changes_body] = STATE(17),
    [sym_change_category] = STATE(8),
    [sym_change_category_name] = STATE(13),
    [aux_sym_changes_body_repeat1] = STATE(8),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(49),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(49),
    [anon_sym_Features_COLON] = ACTIONS(49),
    [anon_sym_Graphics_COLON] = ACTIONS(49),
    [anon_sym_Sounds_COLON] = ACTIONS(49),
    [anon_sym_Optimisations_COLON] = ACTIONS(49),
    [anon_sym_Optimizations_COLON] = ACTIONS(49),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(49),
    [anon_sym_Balancing_COLON] = ACTIONS(49),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(49),
    [anon_sym_Changes_COLON] = ACTIONS(49),
    [anon_sym_Bugfixes_COLON] = ACTIONS(49),
    [anon_sym_Modding_COLON] = ACTIONS(49),
    [anon_sym_Scripting_COLON] = ACTIONS(49),
    [anon_sym_Gui_COLON] = ACTIONS(49),
    [anon_sym_Control_COLON] = ACTIONS(49),
    [anon_sym_Translation_COLON] = ACTIONS(49),
    [anon_sym_Debug_COLON] = ACTIONS(49),
    [anon_sym_Easeofuse_COLON] = ACTIONS(49),
    [anon_sym_Info_COLON] = ACTIONS(49),
    [anon_sym_Locale_COLON] = ACTIONS(49),
    [anon_sym_Other_COLON] = ACTIONS(49),
    [aux_sym_change_category_name_token1] = ACTIONS(51),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_delimeter] = ACTIONS(53),
    [anon_sym_MajorFeatures_COLON] = ACTIONS(53),
    [anon_sym_MinorFeatures_COLON] = ACTIONS(53),
    [anon_sym_Features_COLON] = ACTIONS(53),
    [anon_sym_Graphics_COLON] = ACTIONS(53),
    [anon_sym_Sounds_COLON] = ACTIONS(53),
    [anon_sym_Optimisations_COLON] = ACTIONS(53),
    [anon_sym_Optimizations_COLON] = ACTIONS(53),
    [anon_sym_CombatBalancing_COLON] = ACTIONS(53),
    [anon_sym_Balancing_COLON] = ACTIONS(53),
    [anon_sym_CircuitNetwork_COLON] = ACTIONS(53),
    [anon_sym_Changes_COLON] = ACTIONS(53),
    [anon_sym_Bugfixes_COLON] = ACTIONS(53),
    [anon_sym_Modding_COLON] = ACTIONS(53),
    [anon_sym_Scripting_COLON] = ACTIONS(53),
    [anon_sym_Gui_COLON] = ACTIONS(53),
    [anon_sym_Control_COLON] = ACTIONS(53),
    [anon_sym_Translation_COLON] = ACTIONS(53),
    [anon_sym_Debug_COLON] = ACTIONS(53),
    [anon_sym_Easeofuse_COLON] = ACTIONS(53),
    [anon_sym_Info_COLON] = ACTIONS(53),
    [anon_sym_Locale_COLON] = ACTIONS(53),
    [anon_sym_Other_COLON] = ACTIONS(53),
    [aux_sym_change_category_name_token1] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(59), 1,
      aux_sym_change_category_name_token1,
    ACTIONS(57), 22,
      anon_sym_MajorFeatures_COLON,
      anon_sym_MinorFeatures_COLON,
      anon_sym_Features_COLON,
      anon_sym_Graphics_COLON,
      anon_sym_Sounds_COLON,
      anon_sym_Optimisations_COLON,
      anon_sym_Optimizations_COLON,
      anon_sym_CombatBalancing_COLON,
      anon_sym_Balancing_COLON,
      anon_sym_CircuitNetwork_COLON,
      anon_sym_Changes_COLON,
      anon_sym_Bugfixes_COLON,
      anon_sym_Modding_COLON,
      anon_sym_Scripting_COLON,
      anon_sym_Gui_COLON,
      anon_sym_Control_COLON,
      anon_sym_Translation_COLON,
      anon_sym_Debug_COLON,
      anon_sym_Easeofuse_COLON,
      anon_sym_Info_COLON,
      anon_sym_Locale_COLON,
      anon_sym_Other_COLON,
  [28] = 2,
    ACTIONS(63), 1,
      aux_sym_change_category_name_token1,
    ACTIONS(61), 22,
      anon_sym_MajorFeatures_COLON,
      anon_sym_MinorFeatures_COLON,
      anon_sym_Features_COLON,
      anon_sym_Graphics_COLON,
      anon_sym_Sounds_COLON,
      anon_sym_Optimisations_COLON,
      anon_sym_Optimizations_COLON,
      anon_sym_CombatBalancing_COLON,
      anon_sym_Balancing_COLON,
      anon_sym_CircuitNetwork_COLON,
      anon_sym_Changes_COLON,
      anon_sym_Bugfixes_COLON,
      anon_sym_Modding_COLON,
      anon_sym_Scripting_COLON,
      anon_sym_Gui_COLON,
      anon_sym_Control_COLON,
      anon_sym_Translation_COLON,
      anon_sym_Debug_COLON,
      anon_sym_Easeofuse_COLON,
      anon_sym_Info_COLON,
      anon_sym_Locale_COLON,
      anon_sym_Other_COLON,
  [56] = 3,
    ACTIONS(39), 1,
      aux_sym_change_text_token1,
    STATE(10), 1,
      sym_change_list,
    STATE(6), 2,
      sym_change_text,
      aux_sym_change_list_repeat1,
  [67] = 2,
    STATE(11), 1,
      sym_date_literal,
    ACTIONS(65), 3,
      sym__date_iso8601,
      sym__date_american,
      sym__date_european,
  [76] = 3,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_delimeter,
    STATE(15), 2,
      sym_version_changelog,
      aux_sym_source_file_repeat1,
  [87] = 3,
    ACTIONS(5), 1,
      sym_delimeter,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_version_changelog,
      aux_sym_source_file_repeat1,
  [98] = 1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_delimeter,
  [103] = 2,
    ACTIONS(76), 1,
      anon_sym_Version_COLON,
    STATE(19), 1,
      sym_version,
  [110] = 2,
    ACTIONS(78), 1,
      anon_sym_Date_COLON,
    STATE(9), 1,
      sym_date,
  [117] = 1,
    ACTIONS(80), 1,
      aux_sym_change_text_token1,
  [121] = 1,
    ACTIONS(82), 1,
      anon_sym_Date_COLON,
  [125] = 1,
    ACTIONS(84), 1,
      sym_version_literal,
  [129] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 28,
  [SMALL_STATE(13)] = 56,
  [SMALL_STATE(14)] = 67,
  [SMALL_STATE(15)] = 76,
  [SMALL_STATE(16)] = 87,
  [SMALL_STATE(17)] = 98,
  [SMALL_STATE(18)] = 103,
  [SMALL_STATE(19)] = 110,
  [SMALL_STATE(20)] = 117,
  [SMALL_STATE(21)] = 121,
  [SMALL_STATE(22)] = 125,
  [SMALL_STATE(23)] = 129,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_change_text_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_change_text_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_change_text_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_change_list_repeat1, 2, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_change_list_repeat1, 2, 0, 0),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_change_list_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_text, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_change_text, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_body_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_body_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_body_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_list, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_change_list, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_text, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_change_text, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changes_body, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_category, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_change_category, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_changelog, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_category_name, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_factorio_changelog(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
