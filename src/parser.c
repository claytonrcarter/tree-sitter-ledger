#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 401
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_comment = 3,
  aux_sym_block_comment_token1 = 4,
  anon_sym_end = 5,
  anon_sym_endcomment = 6,
  anon_sym_test = 7,
  anon_sym_endtest = 8,
  anon_sym_DASH = 9,
  anon_sym_DASH_DASH = 10,
  aux_sym_option_token1 = 11,
  anon_sym_EQ = 12,
  aux_sym_option_value_token1 = 13,
  anon_sym_account = 14,
  anon_sym_eval = 15,
  aux_sym_account_subdirective_token1 = 16,
  anon_sym_payee = 17,
  anon_sym_commodity = 18,
  anon_sym_nomarket = 19,
  anon_sym_tag = 20,
  aux_sym_tag_directive_token1 = 21,
  anon_sym_include = 22,
  anon_sym_alias = 23,
  aux_sym_word_directive_token1 = 24,
  anon_sym_def = 25,
  anon_sym_year = 26,
  aux_sym_word_directive_token2 = 27,
  anon_sym_bucket = 28,
  anon_sym_A = 29,
  anon_sym_Y = 30,
  anon_sym_N = 31,
  anon_sym_D = 32,
  anon_sym_C = 33,
  anon_sym_P = 34,
  anon_sym_default = 35,
  anon_sym_format = 36,
  anon_sym_note = 37,
  anon_sym_assert = 38,
  anon_sym_check = 39,
  anon_sym_i = 40,
  anon_sym_I = 41,
  anon_sym_o = 42,
  anon_sym_O = 43,
  anon_sym_TILDE = 44,
  aux_sym_interval_token1 = 45,
  aux_sym_interval_token2 = 46,
  aux_sym_interval_token3 = 47,
  aux_sym_interval_token4 = 48,
  aux_sym_interval_token5 = 49,
  aux_sym_interval_token6 = 50,
  aux_sym_interval_token7 = 51,
  aux_sym_interval_token8 = 52,
  aux_sym_interval_token9 = 53,
  aux_sym_interval_token10 = 54,
  aux_sym_interval_token11 = 55,
  aux_sym_interval_token12 = 56,
  aux_sym_interval_token13 = 57,
  aux_sym_interval_token14 = 58,
  aux_sym_interval_token15 = 59,
  aux_sym_interval_token16 = 60,
  aux_sym_interval_token17 = 61,
  sym__dsep = 62,
  sym__2d = 63,
  sym_time = 64,
  anon_sym_STAR = 65,
  anon_sym_BANG = 66,
  anon_sym_LPAREN = 67,
  aux_sym_code_token1 = 68,
  anon_sym_RPAREN = 69,
  sym_payee = 70,
  sym_query = 71,
  anon_sym_SEMI = 72,
  aux_sym_note_token1 = 73,
  anon_sym_LBRACK = 74,
  anon_sym_RBRACK = 75,
  aux_sym_note_token2 = 76,
  sym_account_name = 77,
  sym__quantity = 78,
  anon_sym_PLUS = 79,
  aux_sym_commodity_token1 = 80,
  aux_sym_commodity_token2 = 81,
  aux_sym_commodity_token3 = 82,
  anon_sym_AT = 83,
  anon_sym_AT_AT = 84,
  anon_sym_ = 85,
  anon_sym_TAB = 86,
  anon_sym_2 = 87,
  anon_sym_TAB2 = 88,
  sym_source_file = 89,
  sym_journal_item = 90,
  sym_block_comment = 91,
  sym_test = 92,
  sym_option = 93,
  sym_option_value = 94,
  sym_directive = 95,
  sym_account_directive = 96,
  sym_account_subdirective = 97,
  sym_commodity_directive = 98,
  sym_commodity_subdirective = 99,
  sym_tag_directive = 100,
  sym_word_directive = 101,
  sym_filename = 102,
  sym_char_directive = 103,
  sym_alias_subdirective = 104,
  sym_default_subdirective = 105,
  sym_format_subdirective = 106,
  sym_note_subdirective = 107,
  sym_assert_subdirective = 108,
  sym_check_subdirective = 109,
  sym_check_in = 110,
  sym_check_out = 111,
  sym_xact = 112,
  sym_plain_xact = 113,
  sym_periodic_xact = 114,
  sym_interval = 115,
  sym_automated_xact = 116,
  sym__xact_date = 117,
  sym_date = 118,
  sym_effective_date = 119,
  sym__4d = 120,
  sym__single_date = 121,
  sym_status = 122,
  sym_code = 123,
  sym_note = 124,
  sym_posting = 125,
  sym_account = 126,
  sym_amount = 127,
  sym_quantity = 128,
  sym_negative_quantity = 129,
  sym_commodity = 130,
  sym_price = 131,
  sym_balance_assertion = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_block_comment_repeat1 = 134,
  aux_sym_account_directive_repeat1 = 135,
  aux_sym_commodity_directive_repeat1 = 136,
  aux_sym_tag_directive_repeat1 = 137,
  aux_sym_plain_xact_repeat1 = 138,
  aux_sym_note_repeat1 = 139,
  aux_sym_note_repeat2 = 140,
  aux_sym_whitespace_repeat1 = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_comment] = "comment",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_end] = "end",
  [anon_sym_endcomment] = "end comment",
  [anon_sym_test] = "test",
  [anon_sym_endtest] = "end test",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_option_token1] = "option_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_option_value_token1] = "option_value_token1",
  [anon_sym_account] = "account",
  [anon_sym_eval] = "eval",
  [aux_sym_account_subdirective_token1] = "account_subdirective_token1",
  [anon_sym_payee] = "payee",
  [anon_sym_commodity] = "commodity",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_tag] = "tag",
  [aux_sym_tag_directive_token1] = "tag_directive_token1",
  [anon_sym_include] = "include",
  [anon_sym_alias] = "alias",
  [aux_sym_word_directive_token1] = "word_directive_token1",
  [anon_sym_def] = "def",
  [anon_sym_year] = "year",
  [aux_sym_word_directive_token2] = "word_directive_token2",
  [anon_sym_bucket] = "bucket",
  [anon_sym_A] = "A",
  [anon_sym_Y] = "Y",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [anon_sym_C] = "C",
  [anon_sym_P] = "P",
  [anon_sym_default] = "default",
  [anon_sym_format] = "format",
  [anon_sym_note] = "note",
  [anon_sym_assert] = "assert",
  [anon_sym_check] = "check",
  [anon_sym_i] = "i",
  [anon_sym_I] = "I",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [anon_sym_TILDE] = "~",
  [aux_sym_interval_token1] = "interval_token1",
  [aux_sym_interval_token2] = "interval_token2",
  [aux_sym_interval_token3] = "interval_token3",
  [aux_sym_interval_token4] = "interval_token4",
  [aux_sym_interval_token5] = "interval_token5",
  [aux_sym_interval_token6] = "interval_token6",
  [aux_sym_interval_token7] = "interval_token7",
  [aux_sym_interval_token8] = "interval_token8",
  [aux_sym_interval_token9] = "interval_token9",
  [aux_sym_interval_token10] = "interval_token10",
  [aux_sym_interval_token11] = "interval_token11",
  [aux_sym_interval_token12] = "interval_token12",
  [aux_sym_interval_token13] = "interval_token13",
  [aux_sym_interval_token14] = "interval_token14",
  [aux_sym_interval_token15] = "interval_token15",
  [aux_sym_interval_token16] = "interval_token16",
  [aux_sym_interval_token17] = "interval_token17",
  [sym__dsep] = "_dsep",
  [sym__2d] = "_2d",
  [sym_time] = "time",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RPAREN] = ")",
  [sym_payee] = "payee",
  [sym_query] = "query",
  [anon_sym_SEMI] = ";",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_note_token2] = "note_token2",
  [sym_account_name] = "",
  [sym__quantity] = "_quantity",
  [anon_sym_PLUS] = "+",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [aux_sym_commodity_token3] = "commodity_token3",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "  ",
  [anon_sym_TAB2] = " \t",
  [sym_source_file] = "source_file",
  [sym_journal_item] = "journal_item",
  [sym_block_comment] = "block_comment",
  [sym_test] = "test",
  [sym_option] = "option",
  [sym_option_value] = "option_value",
  [sym_directive] = "directive",
  [sym_account_directive] = "account_directive",
  [sym_account_subdirective] = "account_subdirective",
  [sym_commodity_directive] = "commodity_directive",
  [sym_commodity_subdirective] = "commodity_subdirective",
  [sym_tag_directive] = "tag_directive",
  [sym_word_directive] = "word_directive",
  [sym_filename] = "filename",
  [sym_char_directive] = "char_directive",
  [sym_alias_subdirective] = "alias_subdirective",
  [sym_default_subdirective] = "default_subdirective",
  [sym_format_subdirective] = "format_subdirective",
  [sym_note_subdirective] = "note_subdirective",
  [sym_assert_subdirective] = "assert_subdirective",
  [sym_check_subdirective] = "check_subdirective",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_periodic_xact] = "periodic_xact",
  [sym_interval] = "interval",
  [sym_automated_xact] = "automated_xact",
  [sym__xact_date] = "_xact_date",
  [sym_date] = "date",
  [sym_effective_date] = "effective_date",
  [sym__4d] = "_4d",
  [sym__single_date] = "_single_date",
  [sym_status] = "status",
  [sym_code] = "code",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_negative_quantity] = "negative_quantity",
  [sym_commodity] = "commodity",
  [sym_price] = "price",
  [sym_balance_assertion] = "balance_assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_tag_directive_repeat1] = "tag_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_note_repeat1] = "note_repeat1",
  [aux_sym_note_repeat2] = "note_repeat2",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_comment] = anon_sym_comment,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_endcomment] = anon_sym_endcomment,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_endtest] = anon_sym_endtest,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_option_token1] = aux_sym_option_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_option_value_token1] = aux_sym_option_value_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_eval] = anon_sym_eval,
  [aux_sym_account_subdirective_token1] = aux_sym_account_subdirective_token1,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_tag] = anon_sym_tag,
  [aux_sym_tag_directive_token1] = aux_sym_tag_directive_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_alias] = anon_sym_alias,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_year] = anon_sym_year,
  [aux_sym_word_directive_token2] = aux_sym_word_directive_token2,
  [anon_sym_bucket] = anon_sym_bucket,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_interval_token1] = aux_sym_interval_token1,
  [aux_sym_interval_token2] = aux_sym_interval_token2,
  [aux_sym_interval_token3] = aux_sym_interval_token3,
  [aux_sym_interval_token4] = aux_sym_interval_token4,
  [aux_sym_interval_token5] = aux_sym_interval_token5,
  [aux_sym_interval_token6] = aux_sym_interval_token6,
  [aux_sym_interval_token7] = aux_sym_interval_token7,
  [aux_sym_interval_token8] = aux_sym_interval_token8,
  [aux_sym_interval_token9] = aux_sym_interval_token9,
  [aux_sym_interval_token10] = aux_sym_interval_token10,
  [aux_sym_interval_token11] = aux_sym_interval_token11,
  [aux_sym_interval_token12] = aux_sym_interval_token12,
  [aux_sym_interval_token13] = aux_sym_interval_token13,
  [aux_sym_interval_token14] = aux_sym_interval_token14,
  [aux_sym_interval_token15] = aux_sym_interval_token15,
  [aux_sym_interval_token16] = aux_sym_interval_token16,
  [aux_sym_interval_token17] = aux_sym_interval_token17,
  [sym__dsep] = sym__dsep,
  [sym__2d] = sym__2d,
  [sym_time] = sym_time,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_payee] = sym_payee,
  [sym_query] = sym_query,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_note_token2] = aux_sym_note_token2,
  [sym_account_name] = sym_account_name,
  [sym__quantity] = sym__quantity,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [aux_sym_commodity_token3] = aux_sym_commodity_token3,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [sym_source_file] = sym_source_file,
  [sym_journal_item] = sym_journal_item,
  [sym_block_comment] = sym_block_comment,
  [sym_test] = sym_test,
  [sym_option] = sym_option,
  [sym_option_value] = sym_option_value,
  [sym_directive] = sym_directive,
  [sym_account_directive] = sym_account_directive,
  [sym_account_subdirective] = sym_account_subdirective,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_commodity_subdirective] = sym_commodity_subdirective,
  [sym_tag_directive] = sym_tag_directive,
  [sym_word_directive] = sym_word_directive,
  [sym_filename] = sym_filename,
  [sym_char_directive] = sym_char_directive,
  [sym_alias_subdirective] = sym_alias_subdirective,
  [sym_default_subdirective] = sym_default_subdirective,
  [sym_format_subdirective] = sym_format_subdirective,
  [sym_note_subdirective] = sym_note_subdirective,
  [sym_assert_subdirective] = sym_assert_subdirective,
  [sym_check_subdirective] = sym_check_subdirective,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_periodic_xact] = sym_periodic_xact,
  [sym_interval] = sym_interval,
  [sym_automated_xact] = sym_automated_xact,
  [sym__xact_date] = sym__xact_date,
  [sym_date] = sym_date,
  [sym_effective_date] = sym_effective_date,
  [sym__4d] = sym__4d,
  [sym__single_date] = sym__single_date,
  [sym_status] = sym_status,
  [sym_code] = sym_code,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_negative_quantity] = sym_negative_quantity,
  [sym_commodity] = sym_commodity,
  [sym_price] = sym_price,
  [sym_balance_assertion] = sym_balance_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
  [aux_sym_tag_directive_repeat1] = aux_sym_tag_directive_repeat1,
  [aux_sym_plain_xact_repeat1] = aux_sym_plain_xact_repeat1,
  [aux_sym_note_repeat1] = aux_sym_note_repeat1,
  [aux_sym_note_repeat2] = aux_sym_note_repeat2,
  [aux_sym_whitespace_repeat1] = aux_sym_whitespace_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_account_subdirective_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_payee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomarket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bucket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interval_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token17] = {
    .visible = false,
    .named = false,
  },
  [sym__dsep] = {
    .visible = false,
    .named = true,
  },
  [sym__2d] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_account_name] = {
    .visible = true,
    .named = false,
  },
  [sym__quantity] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_commodity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB2] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_journal_item] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_option_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_word_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_char_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_default_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_format_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_note_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_in] = {
    .visible = true,
    .named = true,
  },
  [sym_check_out] = {
    .visible = true,
    .named = true,
  },
  [sym_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_periodic_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_interval] = {
    .visible = true,
    .named = true,
  },
  [sym_automated_xact] = {
    .visible = true,
    .named = true,
  },
  [sym__xact_date] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_effective_date] = {
    .visible = true,
    .named = true,
  },
  [sym__4d] = {
    .visible = false,
    .named = true,
  },
  [sym__single_date] = {
    .visible = false,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_assertion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plain_xact_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_whitespace_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_account_name,
  },
  [2] = {
    [0] = sym_account_name,
    [2] = sym_account_name,
  },
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 19,
  [49] = 49,
  [50] = 14,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 15,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 39,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 81,
  [100] = 81,
  [101] = 101,
  [102] = 10,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 15,
  [109] = 14,
  [110] = 19,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 81,
  [117] = 117,
  [118] = 81,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 129,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 128,
  [141] = 139,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 45,
  [148] = 148,
  [149] = 81,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 46,
  [154] = 154,
  [155] = 155,
  [156] = 148,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 176,
  [183] = 183,
  [184] = 163,
  [185] = 81,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 160,
  [196] = 177,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 194,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 81,
  [230] = 230,
  [231] = 81,
  [232] = 81,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 81,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 205,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 81,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 228,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 244,
  [290] = 290,
  [291] = 239,
  [292] = 292,
  [293] = 293,
  [294] = 234,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 238,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 249,
  [319] = 319,
  [320] = 320,
  [321] = 246,
  [322] = 322,
  [323] = 237,
  [324] = 324,
  [325] = 325,
  [326] = 324,
  [327] = 327,
  [328] = 328,
  [329] = 327,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 372,
  [391] = 374,
  [392] = 383,
  [393] = 332,
  [394] = 348,
  [395] = 344,
  [396] = 374,
  [397] = 383,
  [398] = 398,
  [399] = 399,
  [400] = 400,
};

static inline bool aux_sym_tag_directive_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'g'
                  ? (c >= 'F' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'f'
                  ? (c >= 'B' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_4(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
                  ? (c >= 'B' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_commodity_token2_character_set_1(int32_t c) {
  return (c < 3647
    ? (c < 2046
      ? (c < 1423
        ? (c < 162
          ? c == '$'
          : c <= 165)
        : (c <= 1423 || c == 1547))
      : (c <= 2047 || (c < 2801
        ? (c < 2555
          ? (c >= 2546 && c <= 2547)
          : c <= 2555)
        : (c <= 2801 || c == 3065))))
    : (c <= 3647 || (c < 65129
      ? (c < 43064
        ? (c < 8352
          ? c == 6107
          : c <= 8384)
        : (c <= 43064 || c == 65020))
      : (c <= 65129 || (c < 65504
        ? c == 65284
        : (c <= 65505 || (c >= 65509 && c <= 65510)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(223);
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '!') ADVANCE(447);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(449);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead == '+') ADVANCE(465);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(623);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'B') ADVANCE(546);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'D') ADVANCE(372);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(400);
      if (lookahead == 'N') ADVANCE(368);
      if (lookahead == 'O') ADVANCE(408);
      if (lookahead == 'P') ADVANCE(380);
      if (lookahead == 'Y') ADVANCE(364);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == ']') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'b') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == 'y') ADVANCE(468);
      if (lookahead == '~') ADVANCE(411);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(560);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(569);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(540);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(621);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '+') ADVANCE(465);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(621);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == ']') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(623);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(621);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '+') ADVANCE(465);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(171);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(142);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '+') ADVANCE(465);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(456);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(460);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '!') ADVANCE(448);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(463);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(463);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(635);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '!') ADVANCE(447);
      if (lookahead == '(') ADVANCE(449);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(453);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(633);
      if (lookahead == ' ') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(639);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == ' ') ADVANCE(640);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(638);
      if (lookahead == ' ') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(23);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(19);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(24);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'h') ADVANCE(20);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(394);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(27);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(26);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(21);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(391);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 36:
      if (lookahead == 'V') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(346);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(392);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(195);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(196);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 147:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      END_STATE();
    case 148:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 149:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(414);
      END_STATE();
    case 154:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(184);
      END_STATE();
    case 155:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(161);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 164:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      END_STATE();
    case 184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 188:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 189:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 191:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 195:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 196:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 197:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 198:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 199:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(413);
      END_STATE();
    case 200:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 201:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(423);
      END_STATE();
    case 202:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 203:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(425);
      END_STATE();
    case 204:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 205:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 206:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(427);
      END_STATE();
    case 207:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 208:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 209:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 216:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(463);
      END_STATE();
    case 217:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(463);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(313);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 221:
      if (eof) ADVANCE(223);
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(29);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(361);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'D') ADVANCE(373);
      if (lookahead == 'I') ADVANCE(401);
      if (lookahead == 'N') ADVANCE(369);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == 'P') ADVANCE(381);
      if (lookahead == 'Y') ADVANCE(365);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'b') ADVANCE(617);
      if (lookahead == 'c') ADVANCE(606);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(591);
      if (lookahead == '~') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(621);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(620);
      END_STATE();
    case 222:
      if (eof) ADVANCE(223);
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(29);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(359);
      if (lookahead == 'C') ADVANCE(375);
      if (lookahead == 'D') ADVANCE(371);
      if (lookahead == 'I') ADVANCE(399);
      if (lookahead == 'N') ADVANCE(367);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead == 'P') ADVANCE(379);
      if (lookahead == 'Y') ADVANCE(363);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(57);
      if (lookahead == '~') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_comment);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(636);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(636);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(636);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(233);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(362);
      if (lookahead == 'C') ADVANCE(378);
      if (lookahead == 'D') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(402);
      if (lookahead == 'N') ADVANCE(370);
      if (lookahead == 'O') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(382);
      if (lookahead == 'Y') ADVANCE(366);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(286);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(248);
      if (lookahead == '~') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == ' ') ADVANCE(45);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_test);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_payee);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_tag);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(533);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_def);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_year);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Y);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_D);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(480);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(585);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*' &&
          lookahead != ';') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_note_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_note_token2);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(461);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == ' ') ADVANCE(130);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A') ADVANCE(564);
      if (lookahead == 'a') ADVANCE(469);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(467);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R') ADVANCE(551);
      if (lookahead == 'r') ADVANCE(351);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'V') ADVANCE(538);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 'v') ADVANCE(473);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(535);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'e') ADVANCE(518);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(519);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(517);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(524);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead == 's') ADVANCE(520);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(501);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(500);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(504);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(514);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(295);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(499);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(488);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(388);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(325);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(338);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(515);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(523);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(479);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(487);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(528);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(483);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(347);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'g') ADVANCE(333);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'h') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(507);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(474);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(529);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(393);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(490);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(493);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(322);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(532);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(527);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(494);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(506);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(475);
      if (lookahead == 't') ADVANCE(486);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(476);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(525);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(526);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(516);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(508);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(530);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(522);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(509);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(502);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(521);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(342);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(489);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(303);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(390);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(356);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(386);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(318);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(227);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(384);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(331);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(534);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(510);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(484);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(505);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'y') ADVANCE(327);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'y') ADVANCE(492);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(553);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(555);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(552);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(554);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(578);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(543);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(542);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(538);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(424);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(466);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(436);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(426);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(430);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(428);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(432);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(434);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(609);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(620);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(608);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(620);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(610);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(620);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'l') ADVANCE(597);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(599);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(600);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(607);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(298);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(598);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(592);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(581);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(612);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(588);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(348);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(334);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(582);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(615);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(593);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(618);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(594);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(601);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(587);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(613);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(614);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(602);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(616);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(352);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(611);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(343);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(304);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(357);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(319);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(228);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(619);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(604);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(584);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(589);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(328);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*' &&
          lookahead != ';') ADVANCE(453);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*' &&
          lookahead != ';') ADVANCE(453);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 222},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 222},
  [5] = {.lex_state = 222},
  [6] = {.lex_state = 222},
  [7] = {.lex_state = 222},
  [8] = {.lex_state = 222},
  [9] = {.lex_state = 222},
  [10] = {.lex_state = 221},
  [11] = {.lex_state = 222},
  [12] = {.lex_state = 222},
  [13] = {.lex_state = 222},
  [14] = {.lex_state = 221},
  [15] = {.lex_state = 221},
  [16] = {.lex_state = 222},
  [17] = {.lex_state = 222},
  [18] = {.lex_state = 222},
  [19] = {.lex_state = 221},
  [20] = {.lex_state = 222},
  [21] = {.lex_state = 222},
  [22] = {.lex_state = 222},
  [23] = {.lex_state = 222},
  [24] = {.lex_state = 222},
  [25] = {.lex_state = 222},
  [26] = {.lex_state = 222},
  [27] = {.lex_state = 222},
  [28] = {.lex_state = 222},
  [29] = {.lex_state = 222},
  [30] = {.lex_state = 222},
  [31] = {.lex_state = 222},
  [32] = {.lex_state = 222},
  [33] = {.lex_state = 222},
  [34] = {.lex_state = 222},
  [35] = {.lex_state = 222},
  [36] = {.lex_state = 222},
  [37] = {.lex_state = 222},
  [38] = {.lex_state = 222},
  [39] = {.lex_state = 222},
  [40] = {.lex_state = 222},
  [41] = {.lex_state = 222},
  [42] = {.lex_state = 222},
  [43] = {.lex_state = 222},
  [44] = {.lex_state = 222},
  [45] = {.lex_state = 222},
  [46] = {.lex_state = 222},
  [47] = {.lex_state = 222},
  [48] = {.lex_state = 222},
  [49] = {.lex_state = 222},
  [50] = {.lex_state = 222},
  [51] = {.lex_state = 222},
  [52] = {.lex_state = 222},
  [53] = {.lex_state = 222},
  [54] = {.lex_state = 222},
  [55] = {.lex_state = 222},
  [56] = {.lex_state = 222},
  [57] = {.lex_state = 293},
  [58] = {.lex_state = 293},
  [59] = {.lex_state = 293},
  [60] = {.lex_state = 293},
  [61] = {.lex_state = 293},
  [62] = {.lex_state = 293},
  [63] = {.lex_state = 293},
  [64] = {.lex_state = 293},
  [65] = {.lex_state = 222},
  [66] = {.lex_state = 222},
  [67] = {.lex_state = 222},
  [68] = {.lex_state = 222},
  [69] = {.lex_state = 222},
  [70] = {.lex_state = 222},
  [71] = {.lex_state = 222},
  [72] = {.lex_state = 222},
  [73] = {.lex_state = 222},
  [74] = {.lex_state = 222},
  [75] = {.lex_state = 222},
  [76] = {.lex_state = 222},
  [77] = {.lex_state = 222},
  [78] = {.lex_state = 222},
  [79] = {.lex_state = 222},
  [80] = {.lex_state = 222},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 222},
  [120] = {.lex_state = 222},
  [121] = {.lex_state = 222},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 230},
  [126] = {.lex_state = 222},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 231},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 231},
  [132] = {.lex_state = 230},
  [133] = {.lex_state = 231},
  [134] = {.lex_state = 230},
  [135] = {.lex_state = 231},
  [136] = {.lex_state = 230},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 231},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 230},
  [144] = {.lex_state = 222},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 230},
  [177] = {.lex_state = 231},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 231},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 230},
  [197] = {.lex_state = 11},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 222},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 15},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 232},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 16},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 232},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 232},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 12},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 232},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 11},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 232},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 15},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 222},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 18},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 18},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 18},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 18},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 18},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 18},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 18},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 220},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 220},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 451},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 4},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 3},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 218},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 218},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 5},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 4},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 5},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 219},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 5},
  [392] = {.lex_state = 5},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 5},
  [397] = {.lex_state = 5},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_endcomment] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_endtest] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [aux_sym_tag_directive_token1] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [aux_sym_word_directive_token2] = ACTIONS(1),
    [anon_sym_bucket] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_interval_token1] = ACTIONS(1),
    [aux_sym_interval_token2] = ACTIONS(1),
    [aux_sym_interval_token3] = ACTIONS(1),
    [aux_sym_interval_token4] = ACTIONS(1),
    [aux_sym_interval_token5] = ACTIONS(1),
    [aux_sym_interval_token6] = ACTIONS(1),
    [aux_sym_interval_token7] = ACTIONS(1),
    [aux_sym_interval_token8] = ACTIONS(1),
    [aux_sym_interval_token9] = ACTIONS(1),
    [aux_sym_interval_token10] = ACTIONS(1),
    [aux_sym_interval_token11] = ACTIONS(1),
    [aux_sym_interval_token12] = ACTIONS(1),
    [aux_sym_interval_token13] = ACTIONS(1),
    [aux_sym_interval_token14] = ACTIONS(1),
    [aux_sym_interval_token15] = ACTIONS(1),
    [aux_sym_interval_token16] = ACTIONS(1),
    [aux_sym_interval_token17] = ACTIONS(1),
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [aux_sym_commodity_token3] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(346),
    [sym_journal_item] = STATE(3),
    [sym_block_comment] = STATE(69),
    [sym_test] = STATE(69),
    [sym_option] = STATE(68),
    [sym_directive] = STATE(69),
    [sym_account_directive] = STATE(68),
    [sym_commodity_directive] = STATE(68),
    [sym_tag_directive] = STATE(68),
    [sym_word_directive] = STATE(342),
    [sym_char_directive] = STATE(342),
    [sym_check_in] = STATE(338),
    [sym_check_out] = STATE(338),
    [sym_xact] = STATE(69),
    [sym_plain_xact] = STATE(66),
    [sym_periodic_xact] = STATE(66),
    [sym_automated_xact] = STATE(66),
    [sym__xact_date] = STATE(178),
    [sym_date] = STATE(179),
    [sym__4d] = STATE(333),
    [sym__single_date] = STATE(180),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_comment] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_account] = ACTIONS(21),
    [anon_sym_commodity] = ACTIONS(23),
    [anon_sym_tag] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_alias] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_year] = ACTIONS(33),
    [aux_sym_word_directive_token2] = ACTIONS(35),
    [anon_sym_bucket] = ACTIONS(37),
    [anon_sym_A] = ACTIONS(39),
    [anon_sym_Y] = ACTIONS(41),
    [anon_sym_N] = ACTIONS(43),
    [anon_sym_D] = ACTIONS(45),
    [anon_sym_C] = ACTIONS(47),
    [anon_sym_P] = ACTIONS(49),
    [anon_sym_i] = ACTIONS(51),
    [anon_sym_I] = ACTIONS(53),
    [anon_sym_o] = ACTIONS(55),
    [anon_sym_O] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [sym__2d] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 39,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_comment,
    ACTIONS(72), 1,
      anon_sym_end,
    ACTIONS(75), 1,
      anon_sym_test,
    ACTIONS(78), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_DASH_DASH,
    ACTIONS(84), 1,
      anon_sym_EQ,
    ACTIONS(87), 1,
      anon_sym_account,
    ACTIONS(90), 1,
      anon_sym_commodity,
    ACTIONS(93), 1,
      anon_sym_tag,
    ACTIONS(96), 1,
      anon_sym_include,
    ACTIONS(99), 1,
      anon_sym_alias,
    ACTIONS(102), 1,
      anon_sym_def,
    ACTIONS(105), 1,
      anon_sym_year,
    ACTIONS(108), 1,
      aux_sym_word_directive_token2,
    ACTIONS(111), 1,
      anon_sym_bucket,
    ACTIONS(114), 1,
      anon_sym_A,
    ACTIONS(117), 1,
      anon_sym_Y,
    ACTIONS(120), 1,
      anon_sym_N,
    ACTIONS(123), 1,
      anon_sym_D,
    ACTIONS(126), 1,
      anon_sym_C,
    ACTIONS(129), 1,
      anon_sym_P,
    ACTIONS(132), 1,
      anon_sym_i,
    ACTIONS(135), 1,
      anon_sym_I,
    ACTIONS(141), 1,
      anon_sym_TILDE,
    ACTIONS(144), 1,
      sym__2d,
    STATE(178), 1,
      sym__xact_date,
    STATE(179), 1,
      sym_date,
    STATE(180), 1,
      sym__single_date,
    STATE(333), 1,
      sym__4d,
    ACTIONS(138), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(338), 2,
      sym_check_in,
      sym_check_out,
    STATE(342), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(66), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(68), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(69), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [130] = 39,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_comment,
    ACTIONS(11), 1,
      anon_sym_end,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_account,
    ACTIONS(23), 1,
      anon_sym_commodity,
    ACTIONS(25), 1,
      anon_sym_tag,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_alias,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_year,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(37), 1,
      anon_sym_bucket,
    ACTIONS(39), 1,
      anon_sym_A,
    ACTIONS(41), 1,
      anon_sym_Y,
    ACTIONS(43), 1,
      anon_sym_N,
    ACTIONS(45), 1,
      anon_sym_D,
    ACTIONS(47), 1,
      anon_sym_C,
    ACTIONS(49), 1,
      anon_sym_P,
    ACTIONS(51), 1,
      anon_sym_i,
    ACTIONS(53), 1,
      anon_sym_I,
    ACTIONS(57), 1,
      anon_sym_TILDE,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym__xact_date,
    STATE(179), 1,
      sym_date,
    STATE(180), 1,
      sym__single_date,
    STATE(333), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(338), 2,
      sym_check_in,
      sym_check_out,
    STATE(342), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(66), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(68), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(69), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [260] = 6,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(153), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(51), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(151), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [313] = 6,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(162), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(160), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(51), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(158), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [366] = 6,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(162), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(166), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(51), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(164), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [419] = 6,
    STATE(124), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(170), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(29), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(168), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [471] = 6,
    STATE(124), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(176), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(29), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(174), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [523] = 6,
    STATE(124), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(182), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(180), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(29), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(178), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [575] = 7,
    ACTIONS(189), 1,
      aux_sym_commodity_token1,
    STATE(45), 1,
      sym_commodity,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(191), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(193), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
    ACTIONS(187), 23,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
  [627] = 5,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(197), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(195), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [674] = 5,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(203), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(11), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(201), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [721] = 5,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(209), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(207), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(205), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [768] = 2,
    ACTIONS(212), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(214), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [808] = 2,
    ACTIONS(216), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(218), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [848] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(222), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(220), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [894] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(228), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(226), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [940] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(232), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(230), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [986] = 2,
    ACTIONS(234), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(236), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [1026] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(240), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(238), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1072] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(244), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(242), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1118] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(248), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(246), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1164] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(252), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(250), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1210] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(258), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(256), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(254), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1256] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(263), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(261), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1302] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(267), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(265), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1348] = 5,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(271), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(269), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1394] = 2,
    ACTIONS(275), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(273), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1431] = 2,
    ACTIONS(279), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(277), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1468] = 2,
    ACTIONS(283), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(281), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1505] = 2,
    ACTIONS(287), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(285), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1542] = 2,
    ACTIONS(291), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(289), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1579] = 2,
    ACTIONS(295), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(293), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1616] = 2,
    ACTIONS(299), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(297), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1653] = 2,
    ACTIONS(303), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(301), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1690] = 2,
    ACTIONS(307), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(305), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1727] = 2,
    ACTIONS(311), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(309), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1764] = 2,
    ACTIONS(315), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(313), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1801] = 2,
    ACTIONS(319), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(317), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1838] = 2,
    ACTIONS(323), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(321), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1875] = 2,
    ACTIONS(327), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(325), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1912] = 2,
    ACTIONS(331), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(329), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1949] = 2,
    ACTIONS(335), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(333), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [1986] = 2,
    ACTIONS(339), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(337), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2023] = 2,
    ACTIONS(343), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(341), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2060] = 2,
    ACTIONS(347), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(345), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2097] = 2,
    ACTIONS(351), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(349), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2134] = 2,
    ACTIONS(236), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(234), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2171] = 2,
    ACTIONS(355), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(353), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2208] = 2,
    ACTIONS(214), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(212), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2245] = 2,
    ACTIONS(359), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(357), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2282] = 2,
    ACTIONS(363), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(361), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2319] = 2,
    ACTIONS(367), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(365), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2356] = 2,
    ACTIONS(371), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(369), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2393] = 2,
    ACTIONS(218), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(216), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2430] = 2,
    ACTIONS(375), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(373), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
  [2467] = 3,
    ACTIONS(381), 1,
      aux_sym_block_comment_token1,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(379), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2505] = 3,
    ACTIONS(387), 1,
      aux_sym_block_comment_token1,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(385), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2543] = 3,
    ACTIONS(393), 1,
      aux_sym_block_comment_token1,
    ACTIONS(389), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(391), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2581] = 3,
    ACTIONS(399), 1,
      aux_sym_block_comment_token1,
    ACTIONS(395), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(397), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2619] = 3,
    ACTIONS(405), 1,
      aux_sym_block_comment_token1,
    ACTIONS(401), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(403), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2657] = 3,
    ACTIONS(411), 1,
      aux_sym_block_comment_token1,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(409), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2695] = 3,
    ACTIONS(417), 1,
      aux_sym_block_comment_token1,
    ACTIONS(413), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(415), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2733] = 3,
    ACTIONS(423), 1,
      aux_sym_block_comment_token1,
    ACTIONS(419), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(421), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2771] = 2,
    ACTIONS(397), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(395), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2806] = 2,
    ACTIONS(427), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(425), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2841] = 2,
    ACTIONS(385), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(383), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2876] = 2,
    ACTIONS(431), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(429), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2911] = 2,
    ACTIONS(435), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(433), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2946] = 2,
    ACTIONS(379), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(377), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2981] = 2,
    ACTIONS(439), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(437), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3016] = 2,
    ACTIONS(421), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(419), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3051] = 2,
    ACTIONS(415), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(413), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3086] = 2,
    ACTIONS(443), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(441), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3121] = 2,
    ACTIONS(409), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(407), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3156] = 2,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(401), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3191] = 2,
    ACTIONS(447), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(445), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3226] = 2,
    ACTIONS(391), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(389), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3261] = 2,
    ACTIONS(451), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(449), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3296] = 2,
    ACTIONS(455), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(453), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3331] = 3,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(457), 26,
      anon_sym_eval,
      anon_sym_payee,
      anon_sym_nomarket,
      anon_sym_alias,
      anon_sym_default,
      anon_sym_format,
      anon_sym_note,
      anon_sym_assert,
      anon_sym_check,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
  [3367] = 17,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(106), 1,
      sym_amount,
    STATE(123), 1,
      sym_price,
    STATE(139), 1,
      sym_commodity,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(382), 1,
      sym_note,
    ACTIONS(480), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3423] = 4,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    STATE(300), 1,
      sym_interval,
    ACTIONS(484), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(482), 17,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
  [3453] = 17,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    STATE(104), 1,
      sym_amount,
    STATE(137), 1,
      sym_price,
    STATE(139), 1,
      sym_commodity,
    STATE(190), 1,
      sym_balance_assertion,
    STATE(367), 1,
      sym_note,
    ACTIONS(488), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3509] = 17,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(490), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(107), 1,
      sym_amount,
    STATE(122), 1,
      sym_price,
    STATE(139), 1,
      sym_commodity,
    STATE(191), 1,
      sym_balance_assertion,
    STATE(361), 1,
      sym_note,
    ACTIONS(492), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3565] = 16,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_amount,
    STATE(127), 1,
      sym_price,
    STATE(139), 1,
      sym_commodity,
    STATE(193), 1,
      sym_balance_assertion,
    STATE(355), 1,
      sym_note,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3618] = 16,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(104), 1,
      sym_amount,
    STATE(137), 1,
      sym_price,
    STATE(139), 1,
      sym_commodity,
    STATE(190), 1,
      sym_balance_assertion,
    STATE(367), 1,
      sym_note,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3671] = 16,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(106), 1,
      sym_amount,
    STATE(123), 1,
      sym_price,
    STATE(139), 1,
      sym_commodity,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(382), 1,
      sym_note,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3724] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    STATE(375), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3756] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    STATE(375), 1,
      sym_amount,
    ACTIONS(496), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3788] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    STATE(219), 1,
      sym_amount,
    ACTIONS(498), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3820] = 2,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(317), 12,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3838] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    STATE(278), 1,
      sym_amount,
    ACTIONS(500), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3870] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    STATE(371), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3902] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    STATE(200), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3934] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    STATE(335), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3966] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    STATE(354), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3998] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    STATE(272), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(102), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4030] = 4,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(504), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(506), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(457), 8,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [4052] = 4,
    ACTIONS(504), 1,
      anon_sym_AT,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(509), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(457), 9,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [4074] = 9,
    ACTIONS(512), 1,
      anon_sym_DASH,
    ACTIONS(514), 1,
      sym__quantity,
    ACTIONS(516), 1,
      anon_sym_PLUS,
    STATE(53), 1,
      sym_amount,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(141), 1,
      sym_commodity,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4106] = 6,
    ACTIONS(187), 1,
      anon_sym_AT,
    STATE(147), 1,
      sym_commodity,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(518), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(185), 4,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
  [4131] = 11,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(528), 1,
      anon_sym_,
    ACTIONS(530), 1,
      anon_sym_TAB,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    STATE(162), 1,
      sym_status,
    STATE(252), 1,
      sym_account,
    STATE(358), 1,
      sym_note,
    ACTIONS(520), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [4166] = 10,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    STATE(123), 1,
      sym_price,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(382), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_,
      anon_sym_TAB,
  [4198] = 10,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(142), 1,
      sym_price,
    STATE(183), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(536), 2,
      anon_sym_,
      anon_sym_TAB,
  [4230] = 10,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_price,
    STATE(193), 1,
      sym_balance_assertion,
    STATE(355), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4262] = 10,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    STATE(137), 1,
      sym_price,
    STATE(190), 1,
      sym_balance_assertion,
    STATE(367), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [4294] = 2,
    ACTIONS(218), 1,
      anon_sym_AT,
    ACTIONS(216), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4309] = 2,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(212), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4324] = 2,
    ACTIONS(236), 1,
      anon_sym_AT,
    ACTIONS(234), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4339] = 8,
    ACTIONS(546), 1,
      anon_sym_alias,
    ACTIONS(548), 1,
      anon_sym_default,
    ACTIONS(550), 1,
      anon_sym_note,
    ACTIONS(552), 1,
      anon_sym_assert,
    ACTIONS(554), 1,
      anon_sym_check,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(484), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(544), 2,
      anon_sym_eval,
      anon_sym_payee,
  [4366] = 9,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(142), 1,
      sym_price,
    STATE(183), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [4395] = 9,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_price,
    STATE(193), 1,
      sym_balance_assertion,
    STATE(355), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [4424] = 9,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(123), 1,
      sym_price,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(382), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [4453] = 9,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(145), 1,
      sym_price,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(334), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [4482] = 4,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(504), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(558), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(457), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [4500] = 7,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(186), 1,
      sym_status,
    STATE(192), 1,
      sym_code,
    ACTIONS(561), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(567), 2,
      anon_sym_,
      anon_sym_TAB,
  [4524] = 5,
    ACTIONS(457), 1,
      anon_sym_SEMI,
    ACTIONS(569), 1,
      anon_sym_,
    ACTIONS(572), 1,
      anon_sym_TAB,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(504), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [4544] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(286), 1,
      sym_date,
    STATE(333), 1,
      sym__4d,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [4567] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(281), 1,
      sym_date,
    STATE(333), 1,
      sym__4d,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [4590] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(312), 1,
      sym_date,
    STATE(333), 1,
      sym__4d,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [4613] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(170), 1,
      aux_sym_whitespace_repeat1,
    STATE(190), 1,
      sym_balance_assertion,
    STATE(367), 1,
      sym_note,
    ACTIONS(575), 2,
      anon_sym_,
      anon_sym_TAB,
  [4636] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(157), 1,
      aux_sym_whitespace_repeat1,
    STATE(193), 1,
      sym_balance_assertion,
    STATE(355), 1,
      sym_note,
    ACTIONS(577), 2,
      anon_sym_,
      anon_sym_TAB,
  [4659] = 7,
    ACTIONS(546), 1,
      anon_sym_alias,
    ACTIONS(548), 1,
      anon_sym_default,
    ACTIONS(550), 1,
      anon_sym_note,
    ACTIONS(579), 1,
      anon_sym_nomarket,
    ACTIONS(581), 1,
      anon_sym_format,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(484), 2,
      anon_sym_,
      anon_sym_TAB,
  [4682] = 7,
    ACTIONS(411), 1,
      anon_sym_endtest,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 1,
      aux_sym_block_comment_token1,
    ACTIONS(587), 1,
      anon_sym_end,
    STATE(136), 1,
      aux_sym_block_comment_repeat1,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(589), 2,
      anon_sym_,
      anon_sym_TAB,
  [4705] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(287), 1,
      sym_date,
    STATE(333), 1,
      sym__4d,
    ACTIONS(591), 2,
      anon_sym_,
      anon_sym_TAB,
  [4728] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(169), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(593), 2,
      anon_sym_,
      anon_sym_TAB,
  [4751] = 6,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      sym__quantity,
    ACTIONS(599), 1,
      anon_sym_PLUS,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(601), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(46), 2,
      sym_quantity,
      sym_negative_quantity,
  [4772] = 6,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(606), 1,
      aux_sym_block_comment_token1,
    STATE(129), 1,
      aux_sym_block_comment_repeat1,
    STATE(271), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(609), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(611), 2,
      anon_sym_,
      anon_sym_TAB,
  [4793] = 2,
    ACTIONS(616), 1,
      sym__dsep,
    ACTIONS(614), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [4806] = 7,
    ACTIONS(423), 1,
      anon_sym_endcomment,
    ACTIONS(618), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      aux_sym_block_comment_token1,
    ACTIONS(622), 1,
      anon_sym_end,
    STATE(135), 1,
      aux_sym_block_comment_repeat1,
    STATE(271), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(624), 2,
      anon_sym_,
      anon_sym_TAB,
  [4829] = 7,
    ACTIONS(585), 1,
      aux_sym_block_comment_token1,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      anon_sym_end,
    ACTIONS(630), 1,
      anon_sym_endtest,
    STATE(143), 1,
      aux_sym_block_comment_repeat1,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(589), 2,
      anon_sym_,
      anon_sym_TAB,
  [4852] = 7,
    ACTIONS(620), 1,
      aux_sym_block_comment_token1,
    ACTIONS(632), 1,
      anon_sym_LF,
    ACTIONS(634), 1,
      anon_sym_end,
    ACTIONS(636), 1,
      anon_sym_endcomment,
    STATE(138), 1,
      aux_sym_block_comment_repeat1,
    STATE(271), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(624), 2,
      anon_sym_,
      anon_sym_TAB,
  [4875] = 7,
    ACTIONS(405), 1,
      anon_sym_endtest,
    ACTIONS(585), 1,
      aux_sym_block_comment_token1,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_end,
    STATE(125), 1,
      aux_sym_block_comment_repeat1,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(589), 2,
      anon_sym_,
      anon_sym_TAB,
  [4898] = 7,
    ACTIONS(393), 1,
      anon_sym_endcomment,
    ACTIONS(620), 1,
      aux_sym_block_comment_token1,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      anon_sym_end,
    STATE(129), 1,
      aux_sym_block_comment_repeat1,
    STATE(271), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(624), 2,
      anon_sym_,
      anon_sym_TAB,
  [4921] = 6,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      aux_sym_block_comment_token1,
    STATE(136), 1,
      aux_sym_block_comment_repeat1,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(609), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(652), 2,
      anon_sym_,
      anon_sym_TAB,
  [4942] = 7,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(382), 1,
      sym_note,
    ACTIONS(655), 2,
      anon_sym_,
      anon_sym_TAB,
  [4965] = 7,
    ACTIONS(417), 1,
      anon_sym_endcomment,
    ACTIONS(620), 1,
      aux_sym_block_comment_token1,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(657), 1,
      anon_sym_end,
    STATE(129), 1,
      aux_sym_block_comment_repeat1,
    STATE(271), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(624), 2,
      anon_sym_,
      anon_sym_TAB,
  [4988] = 6,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(659), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(147), 2,
      sym_quantity,
      sym_negative_quantity,
  [5009] = 6,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(601), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(153), 2,
      sym_quantity,
      sym_negative_quantity,
  [5030] = 6,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      sym__quantity,
    ACTIONS(599), 1,
      anon_sym_PLUS,
    STATE(128), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(661), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(45), 2,
      sym_quantity,
      sym_negative_quantity,
  [5051] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(174), 1,
      aux_sym_whitespace_repeat1,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(334), 1,
      sym_note,
    ACTIONS(665), 2,
      anon_sym_,
      anon_sym_TAB,
  [5074] = 7,
    ACTIONS(399), 1,
      anon_sym_endtest,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 1,
      aux_sym_block_comment_token1,
    ACTIONS(667), 1,
      anon_sym_end,
    STATE(136), 1,
      aux_sym_block_comment_repeat1,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(589), 2,
      anon_sym_,
      anon_sym_TAB,
  [5097] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(288), 1,
      sym_date,
    STATE(333), 1,
      sym__4d,
    ACTIONS(669), 2,
      anon_sym_,
      anon_sym_TAB,
  [5120] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(339), 1,
      sym_note,
    ACTIONS(673), 2,
      anon_sym_,
      anon_sym_TAB,
  [5143] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(193), 1,
      sym_balance_assertion,
    STATE(355), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [5163] = 2,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(341), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [5175] = 4,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(153), 1,
      sym_commodity,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5191] = 4,
    ACTIONS(504), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(675), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(457), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [5207] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(678), 1,
      anon_sym_,
    ACTIONS(680), 1,
      anon_sym_TAB,
    STATE(158), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_account,
  [5229] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(684), 1,
      anon_sym_TAB,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_account,
  [5251] = 4,
    STATE(90), 1,
      sym_commodity,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5267] = 2,
    ACTIONS(347), 1,
      anon_sym_AT,
    ACTIONS(345), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [5279] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(684), 1,
      anon_sym_TAB,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    STATE(267), 1,
      sym_account,
  [5301] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(686), 1,
      anon_sym_,
    ACTIONS(688), 1,
      anon_sym_TAB,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    STATE(267), 1,
      sym_account,
  [5323] = 4,
    STATE(46), 1,
      sym_commodity,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(191), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5339] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [5359] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(684), 1,
      anon_sym_TAB,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    STATE(270), 1,
      sym_account,
  [5381] = 4,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(359), 1,
      sym_commodity,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5397] = 6,
    ACTIONS(690), 1,
      aux_sym_note_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK,
    ACTIONS(694), 1,
      aux_sym_note_token2,
    STATE(194), 1,
      aux_sym_note_repeat1,
    STATE(246), 1,
      aux_sym_note_repeat2,
    ACTIONS(696), 2,
      anon_sym_,
      anon_sym_TAB,
  [5417] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(698), 1,
      anon_sym_,
    ACTIONS(700), 1,
      anon_sym_TAB,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    STATE(243), 1,
      sym_account,
  [5439] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(702), 1,
      anon_sym_,
    ACTIONS(704), 1,
      anon_sym_TAB,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    STATE(279), 1,
      sym_account,
  [5461] = 6,
    ACTIONS(706), 1,
      aux_sym_note_token1,
    ACTIONS(708), 1,
      anon_sym_LBRACK,
    ACTIONS(710), 1,
      aux_sym_note_token2,
    STATE(160), 1,
      aux_sym_note_repeat1,
    STATE(249), 1,
      aux_sym_note_repeat2,
    ACTIONS(712), 2,
      anon_sym_,
      anon_sym_TAB,
  [5481] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(684), 1,
      anon_sym_TAB,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    STATE(353), 1,
      sym_account,
  [5503] = 1,
    ACTIONS(714), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5513] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(684), 1,
      anon_sym_TAB,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    STATE(371), 1,
      sym_account,
  [5535] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(684), 1,
      anon_sym_TAB,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    STATE(245), 1,
      sym_account,
  [5557] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(343), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [5577] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(334), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [5597] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(382), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [5617] = 7,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym_account_name,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(684), 1,
      anon_sym_TAB,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    STATE(369), 1,
      sym_account,
  [5639] = 4,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_commodity,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5655] = 4,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(371), 1,
      sym_commodity,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5671] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(339), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [5691] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(716), 1,
      anon_sym_LF,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    STATE(399), 1,
      sym_note,
    ACTIONS(718), 2,
      anon_sym_,
      anon_sym_TAB,
  [5708] = 2,
    ACTIONS(720), 1,
      anon_sym_LF,
    ACTIONS(609), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5719] = 2,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(724), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5730] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(726), 1,
      anon_sym_LF,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    STATE(380), 1,
      sym_note,
    ACTIONS(728), 2,
      anon_sym_,
      anon_sym_TAB,
  [5747] = 3,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(276), 1,
      sym_effective_date,
    ACTIONS(730), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5760] = 1,
    ACTIONS(734), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5769] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(736), 1,
      anon_sym_LF,
    STATE(198), 1,
      aux_sym_whitespace_repeat1,
    STATE(343), 1,
      sym_note,
    ACTIONS(738), 2,
      anon_sym_,
      anon_sym_TAB,
  [5786] = 2,
    ACTIONS(720), 1,
      anon_sym_LF,
    ACTIONS(609), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5797] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    STATE(334), 1,
      sym_note,
    ACTIONS(740), 2,
      anon_sym_,
      anon_sym_TAB,
  [5814] = 6,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(742), 1,
      aux_sym_note_token1,
    ACTIONS(744), 1,
      anon_sym_LBRACK,
    ACTIONS(746), 1,
      aux_sym_note_token2,
    STATE(195), 1,
      aux_sym_note_repeat1,
    STATE(318), 1,
      aux_sym_note_repeat2,
  [5833] = 4,
    ACTIONS(748), 1,
      anon_sym_,
    ACTIONS(751), 1,
      anon_sym_TAB,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(504), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5848] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    STATE(340), 1,
      sym_note,
    ACTIONS(756), 2,
      anon_sym_,
      anon_sym_TAB,
  [5865] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    STATE(339), 1,
      sym_note,
    ACTIONS(758), 2,
      anon_sym_,
      anon_sym_TAB,
  [5882] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(760), 1,
      anon_sym_LF,
    STATE(221), 1,
      aux_sym_whitespace_repeat1,
    STATE(347), 1,
      sym_note,
    ACTIONS(762), 2,
      anon_sym_,
      anon_sym_TAB,
  [5899] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    STATE(355), 1,
      sym_note,
    ACTIONS(764), 2,
      anon_sym_,
      anon_sym_TAB,
  [5916] = 5,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(201), 1,
      aux_sym_whitespace_repeat1,
    STATE(382), 1,
      sym_note,
    ACTIONS(766), 2,
      anon_sym_,
      anon_sym_TAB,
  [5933] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    STATE(367), 1,
      sym_note,
    ACTIONS(768), 2,
      anon_sym_,
      anon_sym_TAB,
  [5950] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    STATE(340), 1,
      sym_note,
    ACTIONS(770), 2,
      anon_sym_,
      anon_sym_TAB,
  [5967] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    STATE(400), 1,
      sym_note,
    ACTIONS(772), 2,
      anon_sym_,
      anon_sym_TAB,
  [5984] = 4,
    ACTIONS(774), 1,
      aux_sym_note_token1,
    ACTIONS(779), 1,
      aux_sym_note_token2,
    STATE(194), 1,
      aux_sym_note_repeat1,
    ACTIONS(777), 3,
      anon_sym_LBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5999] = 6,
    ACTIONS(696), 1,
      anon_sym_LF,
    ACTIONS(781), 1,
      aux_sym_note_token1,
    ACTIONS(783), 1,
      anon_sym_LBRACK,
    ACTIONS(785), 1,
      aux_sym_note_token2,
    STATE(218), 1,
      aux_sym_note_repeat1,
    STATE(321), 1,
      aux_sym_note_repeat2,
  [6018] = 2,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(724), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [6029] = 5,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym_code,
    ACTIONS(567), 2,
      anon_sym_,
      anon_sym_TAB,
  [6046] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(347), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6060] = 4,
    ACTIONS(789), 1,
      aux_sym_option_value_token1,
    STATE(232), 1,
      aux_sym_whitespace_repeat1,
    STATE(369), 1,
      sym_filename,
    ACTIONS(791), 2,
      anon_sym_,
      anon_sym_TAB,
  [6074] = 1,
    ACTIONS(793), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6082] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(355), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6096] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6108] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6120] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(400), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6134] = 2,
    ACTIONS(797), 1,
      anon_sym_,
    ACTIONS(795), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [6144] = 4,
    ACTIONS(799), 1,
      anon_sym_LF,
    ACTIONS(801), 1,
      anon_sym_EQ,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(803), 2,
      anon_sym_,
      anon_sym_TAB,
  [6158] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(25), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6170] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(334), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6184] = 1,
    ACTIONS(805), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [6192] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(339), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6206] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6218] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(27), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6230] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(382), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6244] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(343), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6258] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(20), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6270] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6282] = 4,
    ACTIONS(552), 1,
      anon_sym_assert,
    ACTIONS(554), 1,
      anon_sym_check,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(601), 2,
      anon_sym_,
      anon_sym_TAB,
  [6296] = 4,
    ACTIONS(779), 1,
      aux_sym_note_token2,
    ACTIONS(807), 1,
      aux_sym_note_token1,
    STATE(218), 1,
      aux_sym_note_repeat1,
    ACTIONS(777), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [6310] = 1,
    ACTIONS(810), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6318] = 4,
    ACTIONS(812), 1,
      aux_sym_option_value_token1,
    STATE(232), 1,
      aux_sym_whitespace_repeat1,
    STATE(387), 1,
      sym_option_value,
    ACTIONS(791), 2,
      anon_sym_,
      anon_sym_TAB,
  [6332] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(350), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6346] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6358] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6370] = 3,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(224), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(22), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6382] = 3,
    ACTIONS(814), 1,
      sym_time,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6393] = 3,
    ACTIONS(816), 1,
      aux_sym_tag_directive_token1,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(601), 2,
      anon_sym_,
      anon_sym_TAB,
  [6404] = 3,
    ACTIONS(818), 1,
      anon_sym_EQ,
    STATE(233), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(820), 2,
      anon_sym_,
      anon_sym_TAB,
  [6415] = 3,
    ACTIONS(822), 1,
      aux_sym_block_comment_token1,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(824), 2,
      anon_sym_,
      anon_sym_TAB,
  [6426] = 3,
    ACTIONS(457), 1,
      aux_sym_account_subdirective_token1,
    STATE(229), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(826), 2,
      anon_sym_,
      anon_sym_TAB,
  [6437] = 3,
    ACTIONS(829), 1,
      anon_sym_LF,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(831), 2,
      anon_sym_,
      anon_sym_TAB,
  [6448] = 3,
    ACTIONS(504), 1,
      aux_sym_word_directive_token1,
    STATE(231), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(833), 2,
      anon_sym_,
      anon_sym_TAB,
  [6459] = 3,
    ACTIONS(504), 1,
      aux_sym_option_value_token1,
    STATE(232), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(836), 2,
      anon_sym_,
      anon_sym_TAB,
  [6470] = 3,
    ACTIONS(839), 1,
      anon_sym_EQ,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6481] = 3,
    ACTIONS(841), 1,
      aux_sym_note_token2,
    STATE(244), 1,
      aux_sym_note_repeat2,
    ACTIONS(843), 2,
      anon_sym_,
      anon_sym_TAB,
  [6492] = 3,
    ACTIONS(845), 1,
      aux_sym_account_subdirective_token1,
    STATE(229), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(847), 2,
      anon_sym_,
      anon_sym_TAB,
  [6503] = 3,
    ACTIONS(849), 1,
      aux_sym_account_subdirective_token1,
    STATE(229), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(847), 2,
      anon_sym_,
      anon_sym_TAB,
  [6514] = 3,
    ACTIONS(851), 1,
      aux_sym_note_token2,
    STATE(234), 1,
      aux_sym_note_repeat2,
    ACTIONS(853), 2,
      anon_sym_,
      anon_sym_TAB,
  [6525] = 3,
    ACTIONS(841), 1,
      aux_sym_note_token2,
    STATE(244), 1,
      aux_sym_note_repeat2,
    ACTIONS(853), 2,
      anon_sym_,
      anon_sym_TAB,
  [6536] = 3,
    ACTIONS(855), 1,
      aux_sym_note_token2,
    STATE(238), 1,
      aux_sym_note_repeat2,
    ACTIONS(857), 2,
      anon_sym_,
      anon_sym_TAB,
  [6547] = 3,
    ACTIONS(859), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(567), 2,
      anon_sym_,
      anon_sym_TAB,
  [6558] = 3,
    ACTIONS(859), 1,
      sym_payee,
    STATE(268), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(861), 2,
      anon_sym_,
      anon_sym_TAB,
  [6569] = 2,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(865), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6578] = 2,
    ACTIONS(867), 1,
      anon_sym_LF,
    ACTIONS(869), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6587] = 3,
    ACTIONS(871), 1,
      aux_sym_note_token2,
    STATE(244), 1,
      aux_sym_note_repeat2,
    ACTIONS(874), 2,
      anon_sym_,
      anon_sym_TAB,
  [6598] = 2,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(876), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6607] = 3,
    ACTIONS(841), 1,
      aux_sym_note_token2,
    STATE(244), 1,
      aux_sym_note_repeat2,
    ACTIONS(878), 2,
      anon_sym_,
      anon_sym_TAB,
  [6618] = 3,
    ACTIONS(880), 1,
      sym_time,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6629] = 3,
    ACTIONS(882), 1,
      sym_time,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6640] = 3,
    ACTIONS(841), 1,
      aux_sym_note_token2,
    STATE(244), 1,
      aux_sym_note_repeat2,
    ACTIONS(696), 2,
      anon_sym_,
      anon_sym_TAB,
  [6651] = 3,
    ACTIONS(504), 1,
      sym_query,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(884), 2,
      anon_sym_,
      anon_sym_TAB,
  [6662] = 1,
    ACTIONS(887), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6669] = 2,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(891), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6678] = 3,
    ACTIONS(787), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(567), 2,
      anon_sym_,
      anon_sym_TAB,
  [6689] = 3,
    ACTIONS(893), 1,
      aux_sym_block_comment_token1,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(824), 2,
      anon_sym_,
      anon_sym_TAB,
  [6700] = 1,
    ACTIONS(895), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6707] = 3,
    ACTIONS(897), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(567), 2,
      anon_sym_,
      anon_sym_TAB,
  [6718] = 3,
    ACTIONS(899), 1,
      aux_sym_block_comment_token1,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(824), 2,
      anon_sym_,
      anon_sym_TAB,
  [6729] = 1,
    ACTIONS(797), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6736] = 3,
    ACTIONS(901), 1,
      aux_sym_account_subdirective_token1,
    STATE(229), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(847), 2,
      anon_sym_,
      anon_sym_TAB,
  [6747] = 3,
    ACTIONS(903), 1,
      aux_sym_account_subdirective_token1,
    STATE(229), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(847), 2,
      anon_sym_,
      anon_sym_TAB,
  [6758] = 3,
    ACTIONS(905), 1,
      aux_sym_account_subdirective_token1,
    STATE(229), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(847), 2,
      anon_sym_,
      anon_sym_TAB,
  [6769] = 3,
    ACTIONS(907), 1,
      anon_sym_LF,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(909), 2,
      anon_sym_,
      anon_sym_TAB,
  [6780] = 3,
    ACTIONS(911), 1,
      sym_query,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(913), 2,
      anon_sym_,
      anon_sym_TAB,
  [6791] = 3,
    ACTIONS(504), 1,
      aux_sym_block_comment_token1,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(915), 2,
      anon_sym_,
      anon_sym_TAB,
  [6802] = 3,
    ACTIONS(918), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(567), 2,
      anon_sym_,
      anon_sym_TAB,
  [6813] = 3,
    ACTIONS(920), 1,
      sym_payee,
    STATE(240), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(922), 2,
      anon_sym_,
      anon_sym_TAB,
  [6824] = 2,
    ACTIONS(924), 1,
      anon_sym_LF,
    ACTIONS(926), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6833] = 3,
    ACTIONS(928), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(567), 2,
      anon_sym_,
      anon_sym_TAB,
  [6844] = 3,
    ACTIONS(928), 1,
      sym_payee,
    STATE(285), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(930), 2,
      anon_sym_,
      anon_sym_TAB,
  [6855] = 2,
    ACTIONS(932), 1,
      anon_sym_LF,
    ACTIONS(934), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6864] = 3,
    ACTIONS(936), 1,
      aux_sym_block_comment_token1,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(824), 2,
      anon_sym_,
      anon_sym_TAB,
  [6875] = 1,
    ACTIONS(938), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6882] = 3,
    ACTIONS(940), 1,
      aux_sym_word_directive_token1,
    STATE(231), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(942), 2,
      anon_sym_,
      anon_sym_TAB,
  [6893] = 3,
    ACTIONS(944), 1,
      aux_sym_option_value_token1,
    STATE(232), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(791), 2,
      anon_sym_,
      anon_sym_TAB,
  [6904] = 3,
    ACTIONS(946), 1,
      aux_sym_word_directive_token2,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6915] = 1,
    ACTIONS(948), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6922] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(209), 1,
      sym__single_date,
    STATE(333), 1,
      sym__4d,
  [6935] = 1,
    ACTIONS(950), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6942] = 2,
    ACTIONS(490), 1,
      anon_sym_LF,
    ACTIONS(952), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6951] = 3,
    ACTIONS(954), 1,
      sym_time,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6962] = 3,
    ACTIONS(954), 1,
      sym_time,
    STATE(247), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(956), 2,
      anon_sym_,
      anon_sym_TAB,
  [6973] = 3,
    ACTIONS(958), 1,
      aux_sym_word_directive_token2,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [6984] = 3,
    ACTIONS(960), 1,
      sym_payee,
    STATE(265), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(962), 2,
      anon_sym_,
      anon_sym_TAB,
  [6995] = 1,
    ACTIONS(964), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7002] = 3,
    ACTIONS(960), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(567), 2,
      anon_sym_,
      anon_sym_TAB,
  [7013] = 3,
    ACTIONS(814), 1,
      sym_time,
    STATE(248), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(966), 2,
      anon_sym_,
      anon_sym_TAB,
  [7024] = 3,
    ACTIONS(968), 1,
      sym_time,
    STATE(280), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(970), 2,
      anon_sym_,
      anon_sym_TAB,
  [7035] = 3,
    ACTIONS(972), 1,
      sym_time,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(974), 2,
      anon_sym_,
      anon_sym_TAB,
  [7046] = 3,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(976), 1,
      aux_sym_note_token2,
    STATE(289), 1,
      aux_sym_note_repeat2,
  [7056] = 2,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(979), 2,
      anon_sym_,
      anon_sym_TAB,
  [7064] = 3,
    ACTIONS(857), 1,
      anon_sym_LF,
    ACTIONS(981), 1,
      aux_sym_note_token2,
    STATE(314), 1,
      aux_sym_note_repeat2,
  [7074] = 2,
    STATE(260), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(983), 2,
      anon_sym_,
      anon_sym_TAB,
  [7082] = 2,
    STATE(261), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(985), 2,
      anon_sym_,
      anon_sym_TAB,
  [7090] = 3,
    ACTIONS(843), 1,
      anon_sym_LF,
    ACTIONS(987), 1,
      aux_sym_note_token2,
    STATE(289), 1,
      aux_sym_note_repeat2,
  [7100] = 2,
    STATE(263), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(989), 2,
      anon_sym_,
      anon_sym_TAB,
  [7108] = 3,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(716), 1,
      anon_sym_LF,
    STATE(399), 1,
      sym_note,
  [7118] = 2,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(991), 2,
      anon_sym_,
      anon_sym_TAB,
  [7126] = 2,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(993), 2,
      anon_sym_,
      anon_sym_TAB,
  [7134] = 2,
    STATE(226), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(995), 2,
      anon_sym_,
      anon_sym_TAB,
  [7142] = 3,
    ACTIONS(997), 1,
      anon_sym_LF,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      sym_note,
  [7152] = 2,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1001), 2,
      anon_sym_,
      anon_sym_TAB,
  [7160] = 2,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1003), 2,
      anon_sym_,
      anon_sym_TAB,
  [7168] = 2,
    STATE(273), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1005), 2,
      anon_sym_,
      anon_sym_TAB,
  [7176] = 2,
    STATE(274), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1007), 2,
      anon_sym_,
      anon_sym_TAB,
  [7184] = 2,
    STATE(275), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1009), 2,
      anon_sym_,
      anon_sym_TAB,
  [7192] = 2,
    STATE(171), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1011), 2,
      anon_sym_,
      anon_sym_TAB,
  [7200] = 2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1013), 2,
      anon_sym_,
      anon_sym_TAB,
  [7208] = 2,
    STATE(282), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1015), 2,
      anon_sym_,
      anon_sym_TAB,
  [7216] = 2,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1017), 2,
      anon_sym_,
      anon_sym_TAB,
  [7224] = 2,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1019), 2,
      anon_sym_,
      anon_sym_TAB,
  [7232] = 2,
    STATE(172), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1021), 2,
      anon_sym_,
      anon_sym_TAB,
  [7240] = 2,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1023), 2,
      anon_sym_,
      anon_sym_TAB,
  [7248] = 2,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1025), 2,
      anon_sym_,
      anon_sym_TAB,
  [7256] = 3,
    ACTIONS(853), 1,
      anon_sym_LF,
    ACTIONS(987), 1,
      aux_sym_note_token2,
    STATE(289), 1,
      aux_sym_note_repeat2,
  [7266] = 2,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1027), 2,
      anon_sym_,
      anon_sym_TAB,
  [7274] = 2,
    STATE(236), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1029), 2,
      anon_sym_,
      anon_sym_TAB,
  [7282] = 2,
    STATE(235), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1031), 2,
      anon_sym_,
      anon_sym_TAB,
  [7290] = 3,
    ACTIONS(696), 1,
      anon_sym_LF,
    ACTIONS(987), 1,
      aux_sym_note_token2,
    STATE(289), 1,
      aux_sym_note_repeat2,
  [7300] = 3,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(1033), 1,
      anon_sym_LF,
    STATE(330), 1,
      sym_note,
  [7310] = 3,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    ACTIONS(1035), 1,
      anon_sym_LF,
    STATE(222), 1,
      sym_note,
  [7320] = 3,
    ACTIONS(878), 1,
      anon_sym_LF,
    ACTIONS(987), 1,
      aux_sym_note_token2,
    STATE(289), 1,
      aux_sym_note_repeat2,
  [7330] = 3,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(340), 1,
      sym_note,
  [7340] = 3,
    ACTIONS(853), 1,
      anon_sym_LF,
    ACTIONS(1037), 1,
      aux_sym_note_token2,
    STATE(294), 1,
      aux_sym_note_repeat2,
  [7350] = 2,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(344), 1,
      sym_effective_date,
  [7357] = 2,
    ACTIONS(1039), 1,
      aux_sym_option_value_token1,
    STATE(387), 1,
      sym_option_value,
  [7364] = 2,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(395), 1,
      sym_effective_date,
  [7371] = 2,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(394), 1,
      sym_effective_date,
  [7378] = 1,
    ACTIONS(1041), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [7383] = 2,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(348), 1,
      sym_effective_date,
  [7390] = 1,
    ACTIONS(1043), 1,
      anon_sym_LF,
  [7394] = 1,
    ACTIONS(1045), 1,
      sym__2d,
  [7398] = 1,
    ACTIONS(1047), 1,
      anon_sym_LF,
  [7402] = 1,
    ACTIONS(1049), 1,
      sym__dsep,
  [7406] = 1,
    ACTIONS(671), 1,
      anon_sym_LF,
  [7410] = 1,
    ACTIONS(1051), 1,
      anon_sym_LF,
  [7414] = 1,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
  [7418] = 1,
    ACTIONS(1055), 1,
      aux_sym_option_value_token1,
  [7422] = 1,
    ACTIONS(1057), 1,
      anon_sym_LF,
  [7426] = 1,
    ACTIONS(736), 1,
      anon_sym_LF,
  [7430] = 1,
    ACTIONS(1059), 1,
      anon_sym_LF,
  [7434] = 1,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
  [7438] = 1,
    ACTIONS(1063), 1,
      anon_sym_LF,
  [7442] = 1,
    ACTIONS(760), 1,
      anon_sym_LF,
  [7446] = 1,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
  [7450] = 1,
    ACTIONS(1067), 1,
      aux_sym_code_token1,
  [7454] = 1,
    ACTIONS(1069), 1,
      ts_builtin_sym_end,
  [7458] = 1,
    ACTIONS(1071), 1,
      anon_sym_LF,
  [7462] = 1,
    ACTIONS(1073), 1,
      anon_sym_RBRACK,
  [7466] = 1,
    ACTIONS(1075), 1,
      sym__dsep,
  [7470] = 1,
    ACTIONS(1077), 1,
      anon_sym_LF,
  [7474] = 1,
    ACTIONS(1079), 1,
      anon_sym_LF,
  [7478] = 1,
    ACTIONS(1081), 1,
      anon_sym_LF,
  [7482] = 1,
    ACTIONS(1083), 1,
      anon_sym_LF,
  [7486] = 1,
    ACTIONS(1085), 1,
      anon_sym_LF,
  [7490] = 1,
    ACTIONS(534), 1,
      anon_sym_LF,
  [7494] = 1,
    ACTIONS(1087), 1,
      anon_sym_LF,
  [7498] = 1,
    ACTIONS(1089), 1,
      anon_sym_LF,
  [7502] = 1,
    ACTIONS(1091), 1,
      anon_sym_LF,
  [7506] = 1,
    ACTIONS(1093), 1,
      anon_sym_LF,
  [7510] = 1,
    ACTIONS(1095), 1,
      sym__2d,
  [7514] = 1,
    ACTIONS(486), 1,
      anon_sym_LF,
  [7518] = 1,
    ACTIONS(1097), 1,
      anon_sym_LF,
  [7522] = 1,
    ACTIONS(1099), 1,
      sym_account_name,
  [7526] = 1,
    ACTIONS(1053), 1,
      anon_sym_RBRACK,
  [7530] = 1,
    ACTIONS(1101), 1,
      anon_sym_LF,
  [7534] = 1,
    ACTIONS(1103), 1,
      sym_account_name,
  [7538] = 1,
    ACTIONS(462), 1,
      anon_sym_LF,
  [7542] = 1,
    ACTIONS(1105), 1,
      anon_sym_LF,
  [7546] = 1,
    ACTIONS(1107), 1,
      anon_sym_LF,
  [7550] = 1,
    ACTIONS(1109), 1,
      anon_sym_EQ,
  [7554] = 1,
    ACTIONS(1111), 1,
      anon_sym_LF,
  [7558] = 1,
    ACTIONS(1113), 1,
      anon_sym_LF,
  [7562] = 1,
    ACTIONS(863), 1,
      anon_sym_LF,
  [7566] = 1,
    ACTIONS(1115), 1,
      sym__quantity,
  [7570] = 1,
    ACTIONS(1117), 1,
      anon_sym_LF,
  [7574] = 1,
    ACTIONS(1119), 1,
      sym__2d,
  [7578] = 1,
    ACTIONS(1121), 1,
      anon_sym_LF,
  [7582] = 1,
    ACTIONS(1123), 1,
      anon_sym_LF,
  [7586] = 1,
    ACTIONS(1125), 1,
      anon_sym_LF,
  [7590] = 1,
    ACTIONS(1127), 1,
      anon_sym_LF,
  [7594] = 1,
    ACTIONS(616), 1,
      sym__dsep,
  [7598] = 1,
    ACTIONS(538), 1,
      anon_sym_LF,
  [7602] = 1,
    ACTIONS(1129), 1,
      sym__quantity,
  [7606] = 1,
    ACTIONS(1131), 1,
      anon_sym_LF,
  [7610] = 1,
    ACTIONS(1133), 1,
      aux_sym_option_token1,
  [7614] = 1,
    ACTIONS(1135), 1,
      anon_sym_LF,
  [7618] = 1,
    ACTIONS(1137), 1,
      anon_sym_LF,
  [7622] = 1,
    ACTIONS(1139), 1,
      anon_sym_LF,
  [7626] = 1,
    ACTIONS(1141), 1,
      anon_sym_LF,
  [7630] = 1,
    ACTIONS(1143), 1,
      anon_sym_LF,
  [7634] = 1,
    ACTIONS(1145), 1,
      sym__quantity,
  [7638] = 1,
    ACTIONS(1147), 1,
      sym__quantity,
  [7642] = 1,
    ACTIONS(1149), 1,
      anon_sym_LF,
  [7646] = 1,
    ACTIONS(1151), 1,
      anon_sym_RBRACK,
  [7650] = 1,
    ACTIONS(1153), 1,
      anon_sym_RBRACK,
  [7654] = 1,
    ACTIONS(1155), 1,
      sym__quantity,
  [7658] = 1,
    ACTIONS(1157), 1,
      sym__quantity,
  [7662] = 1,
    ACTIONS(932), 1,
      anon_sym_LF,
  [7666] = 1,
    ACTIONS(1159), 1,
      anon_sym_LF,
  [7670] = 1,
    ACTIONS(663), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 130,
  [SMALL_STATE(4)] = 260,
  [SMALL_STATE(5)] = 313,
  [SMALL_STATE(6)] = 366,
  [SMALL_STATE(7)] = 419,
  [SMALL_STATE(8)] = 471,
  [SMALL_STATE(9)] = 523,
  [SMALL_STATE(10)] = 575,
  [SMALL_STATE(11)] = 627,
  [SMALL_STATE(12)] = 674,
  [SMALL_STATE(13)] = 721,
  [SMALL_STATE(14)] = 768,
  [SMALL_STATE(15)] = 808,
  [SMALL_STATE(16)] = 848,
  [SMALL_STATE(17)] = 894,
  [SMALL_STATE(18)] = 940,
  [SMALL_STATE(19)] = 986,
  [SMALL_STATE(20)] = 1026,
  [SMALL_STATE(21)] = 1072,
  [SMALL_STATE(22)] = 1118,
  [SMALL_STATE(23)] = 1164,
  [SMALL_STATE(24)] = 1210,
  [SMALL_STATE(25)] = 1256,
  [SMALL_STATE(26)] = 1302,
  [SMALL_STATE(27)] = 1348,
  [SMALL_STATE(28)] = 1394,
  [SMALL_STATE(29)] = 1431,
  [SMALL_STATE(30)] = 1468,
  [SMALL_STATE(31)] = 1505,
  [SMALL_STATE(32)] = 1542,
  [SMALL_STATE(33)] = 1579,
  [SMALL_STATE(34)] = 1616,
  [SMALL_STATE(35)] = 1653,
  [SMALL_STATE(36)] = 1690,
  [SMALL_STATE(37)] = 1727,
  [SMALL_STATE(38)] = 1764,
  [SMALL_STATE(39)] = 1801,
  [SMALL_STATE(40)] = 1838,
  [SMALL_STATE(41)] = 1875,
  [SMALL_STATE(42)] = 1912,
  [SMALL_STATE(43)] = 1949,
  [SMALL_STATE(44)] = 1986,
  [SMALL_STATE(45)] = 2023,
  [SMALL_STATE(46)] = 2060,
  [SMALL_STATE(47)] = 2097,
  [SMALL_STATE(48)] = 2134,
  [SMALL_STATE(49)] = 2171,
  [SMALL_STATE(50)] = 2208,
  [SMALL_STATE(51)] = 2245,
  [SMALL_STATE(52)] = 2282,
  [SMALL_STATE(53)] = 2319,
  [SMALL_STATE(54)] = 2356,
  [SMALL_STATE(55)] = 2393,
  [SMALL_STATE(56)] = 2430,
  [SMALL_STATE(57)] = 2467,
  [SMALL_STATE(58)] = 2505,
  [SMALL_STATE(59)] = 2543,
  [SMALL_STATE(60)] = 2581,
  [SMALL_STATE(61)] = 2619,
  [SMALL_STATE(62)] = 2657,
  [SMALL_STATE(63)] = 2695,
  [SMALL_STATE(64)] = 2733,
  [SMALL_STATE(65)] = 2771,
  [SMALL_STATE(66)] = 2806,
  [SMALL_STATE(67)] = 2841,
  [SMALL_STATE(68)] = 2876,
  [SMALL_STATE(69)] = 2911,
  [SMALL_STATE(70)] = 2946,
  [SMALL_STATE(71)] = 2981,
  [SMALL_STATE(72)] = 3016,
  [SMALL_STATE(73)] = 3051,
  [SMALL_STATE(74)] = 3086,
  [SMALL_STATE(75)] = 3121,
  [SMALL_STATE(76)] = 3156,
  [SMALL_STATE(77)] = 3191,
  [SMALL_STATE(78)] = 3226,
  [SMALL_STATE(79)] = 3261,
  [SMALL_STATE(80)] = 3296,
  [SMALL_STATE(81)] = 3331,
  [SMALL_STATE(82)] = 3367,
  [SMALL_STATE(83)] = 3423,
  [SMALL_STATE(84)] = 3453,
  [SMALL_STATE(85)] = 3509,
  [SMALL_STATE(86)] = 3565,
  [SMALL_STATE(87)] = 3618,
  [SMALL_STATE(88)] = 3671,
  [SMALL_STATE(89)] = 3724,
  [SMALL_STATE(90)] = 3756,
  [SMALL_STATE(91)] = 3788,
  [SMALL_STATE(92)] = 3820,
  [SMALL_STATE(93)] = 3838,
  [SMALL_STATE(94)] = 3870,
  [SMALL_STATE(95)] = 3902,
  [SMALL_STATE(96)] = 3934,
  [SMALL_STATE(97)] = 3966,
  [SMALL_STATE(98)] = 3998,
  [SMALL_STATE(99)] = 4030,
  [SMALL_STATE(100)] = 4052,
  [SMALL_STATE(101)] = 4074,
  [SMALL_STATE(102)] = 4106,
  [SMALL_STATE(103)] = 4131,
  [SMALL_STATE(104)] = 4166,
  [SMALL_STATE(105)] = 4198,
  [SMALL_STATE(106)] = 4230,
  [SMALL_STATE(107)] = 4262,
  [SMALL_STATE(108)] = 4294,
  [SMALL_STATE(109)] = 4309,
  [SMALL_STATE(110)] = 4324,
  [SMALL_STATE(111)] = 4339,
  [SMALL_STATE(112)] = 4366,
  [SMALL_STATE(113)] = 4395,
  [SMALL_STATE(114)] = 4424,
  [SMALL_STATE(115)] = 4453,
  [SMALL_STATE(116)] = 4482,
  [SMALL_STATE(117)] = 4500,
  [SMALL_STATE(118)] = 4524,
  [SMALL_STATE(119)] = 4544,
  [SMALL_STATE(120)] = 4567,
  [SMALL_STATE(121)] = 4590,
  [SMALL_STATE(122)] = 4613,
  [SMALL_STATE(123)] = 4636,
  [SMALL_STATE(124)] = 4659,
  [SMALL_STATE(125)] = 4682,
  [SMALL_STATE(126)] = 4705,
  [SMALL_STATE(127)] = 4728,
  [SMALL_STATE(128)] = 4751,
  [SMALL_STATE(129)] = 4772,
  [SMALL_STATE(130)] = 4793,
  [SMALL_STATE(131)] = 4806,
  [SMALL_STATE(132)] = 4829,
  [SMALL_STATE(133)] = 4852,
  [SMALL_STATE(134)] = 4875,
  [SMALL_STATE(135)] = 4898,
  [SMALL_STATE(136)] = 4921,
  [SMALL_STATE(137)] = 4942,
  [SMALL_STATE(138)] = 4965,
  [SMALL_STATE(139)] = 4988,
  [SMALL_STATE(140)] = 5009,
  [SMALL_STATE(141)] = 5030,
  [SMALL_STATE(142)] = 5051,
  [SMALL_STATE(143)] = 5074,
  [SMALL_STATE(144)] = 5097,
  [SMALL_STATE(145)] = 5120,
  [SMALL_STATE(146)] = 5143,
  [SMALL_STATE(147)] = 5163,
  [SMALL_STATE(148)] = 5175,
  [SMALL_STATE(149)] = 5191,
  [SMALL_STATE(150)] = 5207,
  [SMALL_STATE(151)] = 5229,
  [SMALL_STATE(152)] = 5251,
  [SMALL_STATE(153)] = 5267,
  [SMALL_STATE(154)] = 5279,
  [SMALL_STATE(155)] = 5301,
  [SMALL_STATE(156)] = 5323,
  [SMALL_STATE(157)] = 5339,
  [SMALL_STATE(158)] = 5359,
  [SMALL_STATE(159)] = 5381,
  [SMALL_STATE(160)] = 5397,
  [SMALL_STATE(161)] = 5417,
  [SMALL_STATE(162)] = 5439,
  [SMALL_STATE(163)] = 5461,
  [SMALL_STATE(164)] = 5481,
  [SMALL_STATE(165)] = 5503,
  [SMALL_STATE(166)] = 5513,
  [SMALL_STATE(167)] = 5535,
  [SMALL_STATE(168)] = 5557,
  [SMALL_STATE(169)] = 5577,
  [SMALL_STATE(170)] = 5597,
  [SMALL_STATE(171)] = 5617,
  [SMALL_STATE(172)] = 5639,
  [SMALL_STATE(173)] = 5655,
  [SMALL_STATE(174)] = 5671,
  [SMALL_STATE(175)] = 5691,
  [SMALL_STATE(176)] = 5708,
  [SMALL_STATE(177)] = 5719,
  [SMALL_STATE(178)] = 5730,
  [SMALL_STATE(179)] = 5747,
  [SMALL_STATE(180)] = 5760,
  [SMALL_STATE(181)] = 5769,
  [SMALL_STATE(182)] = 5786,
  [SMALL_STATE(183)] = 5797,
  [SMALL_STATE(184)] = 5814,
  [SMALL_STATE(185)] = 5833,
  [SMALL_STATE(186)] = 5848,
  [SMALL_STATE(187)] = 5865,
  [SMALL_STATE(188)] = 5882,
  [SMALL_STATE(189)] = 5899,
  [SMALL_STATE(190)] = 5916,
  [SMALL_STATE(191)] = 5933,
  [SMALL_STATE(192)] = 5950,
  [SMALL_STATE(193)] = 5967,
  [SMALL_STATE(194)] = 5984,
  [SMALL_STATE(195)] = 5999,
  [SMALL_STATE(196)] = 6018,
  [SMALL_STATE(197)] = 6029,
  [SMALL_STATE(198)] = 6046,
  [SMALL_STATE(199)] = 6060,
  [SMALL_STATE(200)] = 6074,
  [SMALL_STATE(201)] = 6082,
  [SMALL_STATE(202)] = 6096,
  [SMALL_STATE(203)] = 6108,
  [SMALL_STATE(204)] = 6120,
  [SMALL_STATE(205)] = 6134,
  [SMALL_STATE(206)] = 6144,
  [SMALL_STATE(207)] = 6158,
  [SMALL_STATE(208)] = 6170,
  [SMALL_STATE(209)] = 6184,
  [SMALL_STATE(210)] = 6192,
  [SMALL_STATE(211)] = 6206,
  [SMALL_STATE(212)] = 6218,
  [SMALL_STATE(213)] = 6230,
  [SMALL_STATE(214)] = 6244,
  [SMALL_STATE(215)] = 6258,
  [SMALL_STATE(216)] = 6270,
  [SMALL_STATE(217)] = 6282,
  [SMALL_STATE(218)] = 6296,
  [SMALL_STATE(219)] = 6310,
  [SMALL_STATE(220)] = 6318,
  [SMALL_STATE(221)] = 6332,
  [SMALL_STATE(222)] = 6346,
  [SMALL_STATE(223)] = 6358,
  [SMALL_STATE(224)] = 6370,
  [SMALL_STATE(225)] = 6382,
  [SMALL_STATE(226)] = 6393,
  [SMALL_STATE(227)] = 6404,
  [SMALL_STATE(228)] = 6415,
  [SMALL_STATE(229)] = 6426,
  [SMALL_STATE(230)] = 6437,
  [SMALL_STATE(231)] = 6448,
  [SMALL_STATE(232)] = 6459,
  [SMALL_STATE(233)] = 6470,
  [SMALL_STATE(234)] = 6481,
  [SMALL_STATE(235)] = 6492,
  [SMALL_STATE(236)] = 6503,
  [SMALL_STATE(237)] = 6514,
  [SMALL_STATE(238)] = 6525,
  [SMALL_STATE(239)] = 6536,
  [SMALL_STATE(240)] = 6547,
  [SMALL_STATE(241)] = 6558,
  [SMALL_STATE(242)] = 6569,
  [SMALL_STATE(243)] = 6578,
  [SMALL_STATE(244)] = 6587,
  [SMALL_STATE(245)] = 6598,
  [SMALL_STATE(246)] = 6607,
  [SMALL_STATE(247)] = 6618,
  [SMALL_STATE(248)] = 6629,
  [SMALL_STATE(249)] = 6640,
  [SMALL_STATE(250)] = 6651,
  [SMALL_STATE(251)] = 6662,
  [SMALL_STATE(252)] = 6669,
  [SMALL_STATE(253)] = 6678,
  [SMALL_STATE(254)] = 6689,
  [SMALL_STATE(255)] = 6700,
  [SMALL_STATE(256)] = 6707,
  [SMALL_STATE(257)] = 6718,
  [SMALL_STATE(258)] = 6729,
  [SMALL_STATE(259)] = 6736,
  [SMALL_STATE(260)] = 6747,
  [SMALL_STATE(261)] = 6758,
  [SMALL_STATE(262)] = 6769,
  [SMALL_STATE(263)] = 6780,
  [SMALL_STATE(264)] = 6791,
  [SMALL_STATE(265)] = 6802,
  [SMALL_STATE(266)] = 6813,
  [SMALL_STATE(267)] = 6824,
  [SMALL_STATE(268)] = 6833,
  [SMALL_STATE(269)] = 6844,
  [SMALL_STATE(270)] = 6855,
  [SMALL_STATE(271)] = 6864,
  [SMALL_STATE(272)] = 6875,
  [SMALL_STATE(273)] = 6882,
  [SMALL_STATE(274)] = 6893,
  [SMALL_STATE(275)] = 6904,
  [SMALL_STATE(276)] = 6915,
  [SMALL_STATE(277)] = 6922,
  [SMALL_STATE(278)] = 6935,
  [SMALL_STATE(279)] = 6942,
  [SMALL_STATE(280)] = 6951,
  [SMALL_STATE(281)] = 6962,
  [SMALL_STATE(282)] = 6973,
  [SMALL_STATE(283)] = 6984,
  [SMALL_STATE(284)] = 6995,
  [SMALL_STATE(285)] = 7002,
  [SMALL_STATE(286)] = 7013,
  [SMALL_STATE(287)] = 7024,
  [SMALL_STATE(288)] = 7035,
  [SMALL_STATE(289)] = 7046,
  [SMALL_STATE(290)] = 7056,
  [SMALL_STATE(291)] = 7064,
  [SMALL_STATE(292)] = 7074,
  [SMALL_STATE(293)] = 7082,
  [SMALL_STATE(294)] = 7090,
  [SMALL_STATE(295)] = 7100,
  [SMALL_STATE(296)] = 7108,
  [SMALL_STATE(297)] = 7118,
  [SMALL_STATE(298)] = 7126,
  [SMALL_STATE(299)] = 7134,
  [SMALL_STATE(300)] = 7142,
  [SMALL_STATE(301)] = 7152,
  [SMALL_STATE(302)] = 7160,
  [SMALL_STATE(303)] = 7168,
  [SMALL_STATE(304)] = 7176,
  [SMALL_STATE(305)] = 7184,
  [SMALL_STATE(306)] = 7192,
  [SMALL_STATE(307)] = 7200,
  [SMALL_STATE(308)] = 7208,
  [SMALL_STATE(309)] = 7216,
  [SMALL_STATE(310)] = 7224,
  [SMALL_STATE(311)] = 7232,
  [SMALL_STATE(312)] = 7240,
  [SMALL_STATE(313)] = 7248,
  [SMALL_STATE(314)] = 7256,
  [SMALL_STATE(315)] = 7266,
  [SMALL_STATE(316)] = 7274,
  [SMALL_STATE(317)] = 7282,
  [SMALL_STATE(318)] = 7290,
  [SMALL_STATE(319)] = 7300,
  [SMALL_STATE(320)] = 7310,
  [SMALL_STATE(321)] = 7320,
  [SMALL_STATE(322)] = 7330,
  [SMALL_STATE(323)] = 7340,
  [SMALL_STATE(324)] = 7350,
  [SMALL_STATE(325)] = 7357,
  [SMALL_STATE(326)] = 7364,
  [SMALL_STATE(327)] = 7371,
  [SMALL_STATE(328)] = 7378,
  [SMALL_STATE(329)] = 7383,
  [SMALL_STATE(330)] = 7390,
  [SMALL_STATE(331)] = 7394,
  [SMALL_STATE(332)] = 7398,
  [SMALL_STATE(333)] = 7402,
  [SMALL_STATE(334)] = 7406,
  [SMALL_STATE(335)] = 7410,
  [SMALL_STATE(336)] = 7414,
  [SMALL_STATE(337)] = 7418,
  [SMALL_STATE(338)] = 7422,
  [SMALL_STATE(339)] = 7426,
  [SMALL_STATE(340)] = 7430,
  [SMALL_STATE(341)] = 7434,
  [SMALL_STATE(342)] = 7438,
  [SMALL_STATE(343)] = 7442,
  [SMALL_STATE(344)] = 7446,
  [SMALL_STATE(345)] = 7450,
  [SMALL_STATE(346)] = 7454,
  [SMALL_STATE(347)] = 7458,
  [SMALL_STATE(348)] = 7462,
  [SMALL_STATE(349)] = 7466,
  [SMALL_STATE(350)] = 7470,
  [SMALL_STATE(351)] = 7474,
  [SMALL_STATE(352)] = 7478,
  [SMALL_STATE(353)] = 7482,
  [SMALL_STATE(354)] = 7486,
  [SMALL_STATE(355)] = 7490,
  [SMALL_STATE(356)] = 7494,
  [SMALL_STATE(357)] = 7498,
  [SMALL_STATE(358)] = 7502,
  [SMALL_STATE(359)] = 7506,
  [SMALL_STATE(360)] = 7510,
  [SMALL_STATE(361)] = 7514,
  [SMALL_STATE(362)] = 7518,
  [SMALL_STATE(363)] = 7522,
  [SMALL_STATE(364)] = 7526,
  [SMALL_STATE(365)] = 7530,
  [SMALL_STATE(366)] = 7534,
  [SMALL_STATE(367)] = 7538,
  [SMALL_STATE(368)] = 7542,
  [SMALL_STATE(369)] = 7546,
  [SMALL_STATE(370)] = 7550,
  [SMALL_STATE(371)] = 7554,
  [SMALL_STATE(372)] = 7558,
  [SMALL_STATE(373)] = 7562,
  [SMALL_STATE(374)] = 7566,
  [SMALL_STATE(375)] = 7570,
  [SMALL_STATE(376)] = 7574,
  [SMALL_STATE(377)] = 7578,
  [SMALL_STATE(378)] = 7582,
  [SMALL_STATE(379)] = 7586,
  [SMALL_STATE(380)] = 7590,
  [SMALL_STATE(381)] = 7594,
  [SMALL_STATE(382)] = 7598,
  [SMALL_STATE(383)] = 7602,
  [SMALL_STATE(384)] = 7606,
  [SMALL_STATE(385)] = 7610,
  [SMALL_STATE(386)] = 7614,
  [SMALL_STATE(387)] = 7618,
  [SMALL_STATE(388)] = 7622,
  [SMALL_STATE(389)] = 7626,
  [SMALL_STATE(390)] = 7630,
  [SMALL_STATE(391)] = 7634,
  [SMALL_STATE(392)] = 7638,
  [SMALL_STATE(393)] = 7642,
  [SMALL_STATE(394)] = 7646,
  [SMALL_STATE(395)] = 7650,
  [SMALL_STATE(396)] = 7654,
  [SMALL_STATE(397)] = 7658,
  [SMALL_STATE(398)] = 7662,
  [SMALL_STATE(399)] = 7666,
  [SMALL_STATE(400)] = 7670,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(230),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(385),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(385),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(297),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(303),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(304),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(305),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(333),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(307),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(308),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(311),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(313),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(315),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(349),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(111),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(124),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(217),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 6),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 6),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(103),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 10),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 10),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 8),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 8),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(81),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(99),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(100),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(116),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(118),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(118),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(129),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(372),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(271),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(136),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(390),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(228),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(149),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(185),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(185),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [774] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(194),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2),
  [807] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(218),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(229),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(231),
  [836] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(232),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat2, 2), SHIFT_REPEAT(244),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [884] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(250),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 2),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(264),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2), SHIFT_REPEAT(289),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1069] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ledger(void) {
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
