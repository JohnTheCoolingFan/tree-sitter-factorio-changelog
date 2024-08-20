package tree_sitter_factorio_changelog_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-factorio_changelog"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_factorio_changelog.Language())
	if language == nil {
		t.Errorf("Error loading FactorioChangelog grammar")
	}
}
