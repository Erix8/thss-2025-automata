
// Generated from regex.g4 by ANTLR 4.12.0


#include "regexListener.h"

#include "regexParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RegexParserStaticData final {
  RegexParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RegexParserStaticData(const RegexParserStaticData&) = delete;
  RegexParserStaticData(RegexParserStaticData&&) = delete;
  RegexParserStaticData& operator=(const RegexParserStaticData&) = delete;
  RegexParserStaticData& operator=(RegexParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag regexParserOnceFlag;
RegexParserStaticData *regexParserStaticData = nullptr;

void regexParserInitialize() {
  assert(regexParserStaticData == nullptr);
  auto staticData = std::make_unique<RegexParserStaticData>(
    std::vector<std::string>{
      "regex", "expression", "expressionItem", "normalItem", "group", "groupNonCapturingModifier", 
      "single", "characterGroup", "characterGroupNegativeModifier", "characterGroupItem", 
      "characterRange", "characterClass", "quantifier", "lazyModifier", 
      "quantifierType", "rangeDelimiter", "rangeQuantifier", "rangeQuantifierLowerBound", 
      "rangeQuantifierUpperBound", "integer", "backreference", "anchor", 
      "char", "charInGroup"
    },
    std::vector<std::string>{
      "", "'|'", "'('", "')'", "':'", "'['", "']'", "'-'", "','", "'{'", 
      "'}'", "'\\'", "'.'", "'\\w'", "'\\W'", "'\\d'", "'\\D'", "'\\s'", 
      "'\\S'", "'*'", "'+'", "'\\u003F'", "'^'", "'\\b'", "'\\B'", "'$'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "AnyCharacter", "CharacterClassAnyWord", 
      "CharacterClassAnyWordInverted", "CharacterClassAnyDecimalDigit", 
      "CharacterClassAnyDecimalDigitInverted", "CharacterClassAnyBlank", 
      "CharacterClassAnyBlankInverted", "ZeroOrMoreQuantifier", "OneOrMoreQuantifier", 
      "ZeroOrOneQuantifier", "AnchorStartOfString", "AnchorWordBoundary", 
      "AnchorNonWordBoundary", "AnchorEndOfString", "EscapedChar", "Digit", 
      "Char"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,156,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,5,0,52,8,0,10,0,12,0,55,9,0,1,1,4,
  	1,58,8,1,11,1,12,1,59,1,2,1,2,3,2,64,8,2,1,2,3,2,67,8,2,1,3,1,3,1,3,3,
  	3,72,8,3,1,4,1,4,3,4,76,8,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,3,
  	6,88,8,6,1,7,1,7,3,7,92,8,7,1,7,4,7,95,8,7,11,7,12,7,96,1,7,1,7,1,8,1,
  	8,1,9,1,9,1,9,3,9,106,8,9,1,10,1,10,1,10,1,10,1,11,1,11,1,12,1,12,3,12,
  	116,8,12,1,13,1,13,1,14,1,14,1,14,1,14,3,14,124,8,14,1,15,1,15,1,16,1,
  	16,1,16,3,16,131,8,16,1,16,3,16,134,8,16,1,16,1,16,1,17,1,17,1,18,1,18,
  	1,19,4,19,143,8,19,11,19,12,19,144,1,20,1,20,1,20,1,21,1,21,1,22,1,22,
  	1,23,1,23,1,23,0,0,24,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,0,4,1,0,13,18,1,0,22,25,3,0,4,4,7,8,26,28,5,0,1,5,8,
  	10,12,12,19,22,25,28,152,0,48,1,0,0,0,2,57,1,0,0,0,4,66,1,0,0,0,6,71,
  	1,0,0,0,8,73,1,0,0,0,10,80,1,0,0,0,12,87,1,0,0,0,14,89,1,0,0,0,16,100,
  	1,0,0,0,18,105,1,0,0,0,20,107,1,0,0,0,22,111,1,0,0,0,24,113,1,0,0,0,26,
  	117,1,0,0,0,28,123,1,0,0,0,30,125,1,0,0,0,32,127,1,0,0,0,34,137,1,0,0,
  	0,36,139,1,0,0,0,38,142,1,0,0,0,40,146,1,0,0,0,42,149,1,0,0,0,44,151,
  	1,0,0,0,46,153,1,0,0,0,48,53,3,2,1,0,49,50,5,1,0,0,50,52,3,2,1,0,51,49,
  	1,0,0,0,52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,1,1,0,0,0,55,53,
  	1,0,0,0,56,58,3,4,2,0,57,56,1,0,0,0,58,59,1,0,0,0,59,57,1,0,0,0,59,60,
  	1,0,0,0,60,3,1,0,0,0,61,63,3,6,3,0,62,64,3,24,12,0,63,62,1,0,0,0,63,64,
  	1,0,0,0,64,67,1,0,0,0,65,67,3,42,21,0,66,61,1,0,0,0,66,65,1,0,0,0,67,
  	5,1,0,0,0,68,72,3,12,6,0,69,72,3,8,4,0,70,72,3,40,20,0,71,68,1,0,0,0,
  	71,69,1,0,0,0,71,70,1,0,0,0,72,7,1,0,0,0,73,75,5,2,0,0,74,76,3,10,5,0,
  	75,74,1,0,0,0,75,76,1,0,0,0,76,77,1,0,0,0,77,78,3,0,0,0,78,79,5,3,0,0,
  	79,9,1,0,0,0,80,81,5,21,0,0,81,82,5,4,0,0,82,11,1,0,0,0,83,88,3,44,22,
  	0,84,88,3,22,11,0,85,88,5,12,0,0,86,88,3,14,7,0,87,83,1,0,0,0,87,84,1,
  	0,0,0,87,85,1,0,0,0,87,86,1,0,0,0,88,13,1,0,0,0,89,91,5,5,0,0,90,92,3,
  	16,8,0,91,90,1,0,0,0,91,92,1,0,0,0,92,94,1,0,0,0,93,95,3,18,9,0,94,93,
  	1,0,0,0,95,96,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,98,1,0,0,0,98,99,
  	5,6,0,0,99,15,1,0,0,0,100,101,5,22,0,0,101,17,1,0,0,0,102,106,3,46,23,
  	0,103,106,3,22,11,0,104,106,3,20,10,0,105,102,1,0,0,0,105,103,1,0,0,0,
  	105,104,1,0,0,0,106,19,1,0,0,0,107,108,3,46,23,0,108,109,5,7,0,0,109,
  	110,3,46,23,0,110,21,1,0,0,0,111,112,7,0,0,0,112,23,1,0,0,0,113,115,3,
  	28,14,0,114,116,3,26,13,0,115,114,1,0,0,0,115,116,1,0,0,0,116,25,1,0,
  	0,0,117,118,5,21,0,0,118,27,1,0,0,0,119,124,5,19,0,0,120,124,5,20,0,0,
  	121,124,5,21,0,0,122,124,3,32,16,0,123,119,1,0,0,0,123,120,1,0,0,0,123,
  	121,1,0,0,0,123,122,1,0,0,0,124,29,1,0,0,0,125,126,5,8,0,0,126,31,1,0,
  	0,0,127,128,5,9,0,0,128,130,3,34,17,0,129,131,3,30,15,0,130,129,1,0,0,
  	0,130,131,1,0,0,0,131,133,1,0,0,0,132,134,3,36,18,0,133,132,1,0,0,0,133,
  	134,1,0,0,0,134,135,1,0,0,0,135,136,5,10,0,0,136,33,1,0,0,0,137,138,3,
  	38,19,0,138,35,1,0,0,0,139,140,3,38,19,0,140,37,1,0,0,0,141,143,5,27,
  	0,0,142,141,1,0,0,0,143,144,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,
  	39,1,0,0,0,146,147,5,11,0,0,147,148,3,38,19,0,148,41,1,0,0,0,149,150,
  	7,1,0,0,150,43,1,0,0,0,151,152,7,2,0,0,152,45,1,0,0,0,153,154,7,3,0,0,
  	154,47,1,0,0,0,15,53,59,63,66,71,75,87,91,96,105,115,123,130,133,144
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  regexParserStaticData = staticData.release();
}

}

regexParser::regexParser(TokenStream *input) : regexParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

regexParser::regexParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  regexParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *regexParserStaticData->atn, regexParserStaticData->decisionToDFA, regexParserStaticData->sharedContextCache, options);
}

regexParser::~regexParser() {
  delete _interpreter;
}

const atn::ATN& regexParser::getATN() const {
  return *regexParserStaticData->atn;
}

std::string regexParser::getGrammarFileName() const {
  return "regex.g4";
}

const std::vector<std::string>& regexParser::getRuleNames() const {
  return regexParserStaticData->ruleNames;
}

const dfa::Vocabulary& regexParser::getVocabulary() const {
  return regexParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView regexParser::getSerializedATN() const {
  return regexParserStaticData->serializedATN;
}


//----------------- RegexContext ------------------------------------------------------------------

regexParser::RegexContext::RegexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<regexParser::ExpressionContext *> regexParser::RegexContext::expression() {
  return getRuleContexts<regexParser::ExpressionContext>();
}

regexParser::ExpressionContext* regexParser::RegexContext::expression(size_t i) {
  return getRuleContext<regexParser::ExpressionContext>(i);
}


size_t regexParser::RegexContext::getRuleIndex() const {
  return regexParser::RuleRegex;
}

void regexParser::RegexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegex(this);
}

void regexParser::RegexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegex(this);
}

regexParser::RegexContext* regexParser::regex() {
  RegexContext *_localctx = _tracker.createInstance<RegexContext>(_ctx, getState());
  enterRule(_localctx, 0, regexParser::RuleRegex);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    expression();
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == regexParser::T__0) {
      setState(49);
      match(regexParser::T__0);
      setState(50);
      expression();
      setState(55);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

regexParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<regexParser::ExpressionItemContext *> regexParser::ExpressionContext::expressionItem() {
  return getRuleContexts<regexParser::ExpressionItemContext>();
}

regexParser::ExpressionItemContext* regexParser::ExpressionContext::expressionItem(size_t i) {
  return getRuleContext<regexParser::ExpressionItemContext>(i);
}


size_t regexParser::ExpressionContext::getRuleIndex() const {
  return regexParser::RuleExpression;
}

void regexParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void regexParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

regexParser::ExpressionContext* regexParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, regexParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(56);
      expressionItem();
      setState(59); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 533199284) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionItemContext ------------------------------------------------------------------

regexParser::ExpressionItemContext::ExpressionItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::NormalItemContext* regexParser::ExpressionItemContext::normalItem() {
  return getRuleContext<regexParser::NormalItemContext>(0);
}

regexParser::QuantifierContext* regexParser::ExpressionItemContext::quantifier() {
  return getRuleContext<regexParser::QuantifierContext>(0);
}

regexParser::AnchorContext* regexParser::ExpressionItemContext::anchor() {
  return getRuleContext<regexParser::AnchorContext>(0);
}


size_t regexParser::ExpressionItemContext::getRuleIndex() const {
  return regexParser::RuleExpressionItem;
}

void regexParser::ExpressionItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionItem(this);
}

void regexParser::ExpressionItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionItem(this);
}

regexParser::ExpressionItemContext* regexParser::expressionItem() {
  ExpressionItemContext *_localctx = _tracker.createInstance<ExpressionItemContext>(_ctx, getState());
  enterRule(_localctx, 4, regexParser::RuleExpressionItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case regexParser::T__1:
      case regexParser::T__3:
      case regexParser::T__4:
      case regexParser::T__6:
      case regexParser::T__7:
      case regexParser::T__10:
      case regexParser::AnyCharacter:
      case regexParser::CharacterClassAnyWord:
      case regexParser::CharacterClassAnyWordInverted:
      case regexParser::CharacterClassAnyDecimalDigit:
      case regexParser::CharacterClassAnyDecimalDigitInverted:
      case regexParser::CharacterClassAnyBlank:
      case regexParser::CharacterClassAnyBlankInverted:
      case regexParser::EscapedChar:
      case regexParser::Digit:
      case regexParser::Char: {
        enterOuterAlt(_localctx, 1);
        setState(61);
        normalItem();
        setState(63);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 3670528) != 0)) {
          setState(62);
          quantifier();
        }
        break;
      }

      case regexParser::AnchorStartOfString:
      case regexParser::AnchorWordBoundary:
      case regexParser::AnchorNonWordBoundary:
      case regexParser::AnchorEndOfString: {
        enterOuterAlt(_localctx, 2);
        setState(65);
        anchor();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalItemContext ------------------------------------------------------------------

regexParser::NormalItemContext::NormalItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::SingleContext* regexParser::NormalItemContext::single() {
  return getRuleContext<regexParser::SingleContext>(0);
}

regexParser::GroupContext* regexParser::NormalItemContext::group() {
  return getRuleContext<regexParser::GroupContext>(0);
}

regexParser::BackreferenceContext* regexParser::NormalItemContext::backreference() {
  return getRuleContext<regexParser::BackreferenceContext>(0);
}


size_t regexParser::NormalItemContext::getRuleIndex() const {
  return regexParser::RuleNormalItem;
}

void regexParser::NormalItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalItem(this);
}

void regexParser::NormalItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalItem(this);
}

regexParser::NormalItemContext* regexParser::normalItem() {
  NormalItemContext *_localctx = _tracker.createInstance<NormalItemContext>(_ctx, getState());
  enterRule(_localctx, 6, regexParser::RuleNormalItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case regexParser::T__3:
      case regexParser::T__4:
      case regexParser::T__6:
      case regexParser::T__7:
      case regexParser::AnyCharacter:
      case regexParser::CharacterClassAnyWord:
      case regexParser::CharacterClassAnyWordInverted:
      case regexParser::CharacterClassAnyDecimalDigit:
      case regexParser::CharacterClassAnyDecimalDigitInverted:
      case regexParser::CharacterClassAnyBlank:
      case regexParser::CharacterClassAnyBlankInverted:
      case regexParser::EscapedChar:
      case regexParser::Digit:
      case regexParser::Char: {
        enterOuterAlt(_localctx, 1);
        setState(68);
        single();
        break;
      }

      case regexParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        group();
        break;
      }

      case regexParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(70);
        backreference();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupContext ------------------------------------------------------------------

regexParser::GroupContext::GroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::RegexContext* regexParser::GroupContext::regex() {
  return getRuleContext<regexParser::RegexContext>(0);
}

regexParser::GroupNonCapturingModifierContext* regexParser::GroupContext::groupNonCapturingModifier() {
  return getRuleContext<regexParser::GroupNonCapturingModifierContext>(0);
}


size_t regexParser::GroupContext::getRuleIndex() const {
  return regexParser::RuleGroup;
}

void regexParser::GroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroup(this);
}

void regexParser::GroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroup(this);
}

regexParser::GroupContext* regexParser::group() {
  GroupContext *_localctx = _tracker.createInstance<GroupContext>(_ctx, getState());
  enterRule(_localctx, 8, regexParser::RuleGroup);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(regexParser::T__1);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == regexParser::ZeroOrOneQuantifier) {
      setState(74);
      groupNonCapturingModifier();
    }
    setState(77);
    regex();
    setState(78);
    match(regexParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupNonCapturingModifierContext ------------------------------------------------------------------

regexParser::GroupNonCapturingModifierContext::GroupNonCapturingModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* regexParser::GroupNonCapturingModifierContext::ZeroOrOneQuantifier() {
  return getToken(regexParser::ZeroOrOneQuantifier, 0);
}


size_t regexParser::GroupNonCapturingModifierContext::getRuleIndex() const {
  return regexParser::RuleGroupNonCapturingModifier;
}

void regexParser::GroupNonCapturingModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupNonCapturingModifier(this);
}

void regexParser::GroupNonCapturingModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupNonCapturingModifier(this);
}

regexParser::GroupNonCapturingModifierContext* regexParser::groupNonCapturingModifier() {
  GroupNonCapturingModifierContext *_localctx = _tracker.createInstance<GroupNonCapturingModifierContext>(_ctx, getState());
  enterRule(_localctx, 10, regexParser::RuleGroupNonCapturingModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(regexParser::ZeroOrOneQuantifier);
    setState(81);
    match(regexParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleContext ------------------------------------------------------------------

regexParser::SingleContext::SingleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::CharContext* regexParser::SingleContext::char_() {
  return getRuleContext<regexParser::CharContext>(0);
}

regexParser::CharacterClassContext* regexParser::SingleContext::characterClass() {
  return getRuleContext<regexParser::CharacterClassContext>(0);
}

tree::TerminalNode* regexParser::SingleContext::AnyCharacter() {
  return getToken(regexParser::AnyCharacter, 0);
}

regexParser::CharacterGroupContext* regexParser::SingleContext::characterGroup() {
  return getRuleContext<regexParser::CharacterGroupContext>(0);
}


size_t regexParser::SingleContext::getRuleIndex() const {
  return regexParser::RuleSingle;
}

void regexParser::SingleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle(this);
}

void regexParser::SingleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle(this);
}

regexParser::SingleContext* regexParser::single() {
  SingleContext *_localctx = _tracker.createInstance<SingleContext>(_ctx, getState());
  enterRule(_localctx, 12, regexParser::RuleSingle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(87);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case regexParser::T__3:
      case regexParser::T__6:
      case regexParser::T__7:
      case regexParser::EscapedChar:
      case regexParser::Digit:
      case regexParser::Char: {
        enterOuterAlt(_localctx, 1);
        setState(83);
        char_();
        break;
      }

      case regexParser::CharacterClassAnyWord:
      case regexParser::CharacterClassAnyWordInverted:
      case regexParser::CharacterClassAnyDecimalDigit:
      case regexParser::CharacterClassAnyDecimalDigitInverted:
      case regexParser::CharacterClassAnyBlank:
      case regexParser::CharacterClassAnyBlankInverted: {
        enterOuterAlt(_localctx, 2);
        setState(84);
        characterClass();
        break;
      }

      case regexParser::AnyCharacter: {
        enterOuterAlt(_localctx, 3);
        setState(85);
        match(regexParser::AnyCharacter);
        break;
      }

      case regexParser::T__4: {
        enterOuterAlt(_localctx, 4);
        setState(86);
        characterGroup();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterGroupContext ------------------------------------------------------------------

regexParser::CharacterGroupContext::CharacterGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::CharacterGroupNegativeModifierContext* regexParser::CharacterGroupContext::characterGroupNegativeModifier() {
  return getRuleContext<regexParser::CharacterGroupNegativeModifierContext>(0);
}

std::vector<regexParser::CharacterGroupItemContext *> regexParser::CharacterGroupContext::characterGroupItem() {
  return getRuleContexts<regexParser::CharacterGroupItemContext>();
}

regexParser::CharacterGroupItemContext* regexParser::CharacterGroupContext::characterGroupItem(size_t i) {
  return getRuleContext<regexParser::CharacterGroupItemContext>(i);
}


size_t regexParser::CharacterGroupContext::getRuleIndex() const {
  return regexParser::RuleCharacterGroup;
}

void regexParser::CharacterGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterGroup(this);
}

void regexParser::CharacterGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterGroup(this);
}

regexParser::CharacterGroupContext* regexParser::characterGroup() {
  CharacterGroupContext *_localctx = _tracker.createInstance<CharacterGroupContext>(_ctx, getState());
  enterRule(_localctx, 14, regexParser::RuleCharacterGroup);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(regexParser::T__4);
    setState(91);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(90);
      characterGroupNegativeModifier();
      break;
    }

    default:
      break;
    }
    setState(94); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(93);
      characterGroupItem();
      setState(96); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 511702846) != 0));
    setState(98);
    match(regexParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterGroupNegativeModifierContext ------------------------------------------------------------------

regexParser::CharacterGroupNegativeModifierContext::CharacterGroupNegativeModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* regexParser::CharacterGroupNegativeModifierContext::AnchorStartOfString() {
  return getToken(regexParser::AnchorStartOfString, 0);
}


size_t regexParser::CharacterGroupNegativeModifierContext::getRuleIndex() const {
  return regexParser::RuleCharacterGroupNegativeModifier;
}

void regexParser::CharacterGroupNegativeModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterGroupNegativeModifier(this);
}

void regexParser::CharacterGroupNegativeModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterGroupNegativeModifier(this);
}

regexParser::CharacterGroupNegativeModifierContext* regexParser::characterGroupNegativeModifier() {
  CharacterGroupNegativeModifierContext *_localctx = _tracker.createInstance<CharacterGroupNegativeModifierContext>(_ctx, getState());
  enterRule(_localctx, 16, regexParser::RuleCharacterGroupNegativeModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(regexParser::AnchorStartOfString);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterGroupItemContext ------------------------------------------------------------------

regexParser::CharacterGroupItemContext::CharacterGroupItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::CharInGroupContext* regexParser::CharacterGroupItemContext::charInGroup() {
  return getRuleContext<regexParser::CharInGroupContext>(0);
}

regexParser::CharacterClassContext* regexParser::CharacterGroupItemContext::characterClass() {
  return getRuleContext<regexParser::CharacterClassContext>(0);
}

regexParser::CharacterRangeContext* regexParser::CharacterGroupItemContext::characterRange() {
  return getRuleContext<regexParser::CharacterRangeContext>(0);
}


size_t regexParser::CharacterGroupItemContext::getRuleIndex() const {
  return regexParser::RuleCharacterGroupItem;
}

void regexParser::CharacterGroupItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterGroupItem(this);
}

void regexParser::CharacterGroupItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterGroupItem(this);
}

regexParser::CharacterGroupItemContext* regexParser::characterGroupItem() {
  CharacterGroupItemContext *_localctx = _tracker.createInstance<CharacterGroupItemContext>(_ctx, getState());
  enterRule(_localctx, 18, regexParser::RuleCharacterGroupItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(105);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(102);
      charInGroup();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(103);
      characterClass();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(104);
      characterRange();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterRangeContext ------------------------------------------------------------------

regexParser::CharacterRangeContext::CharacterRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<regexParser::CharInGroupContext *> regexParser::CharacterRangeContext::charInGroup() {
  return getRuleContexts<regexParser::CharInGroupContext>();
}

regexParser::CharInGroupContext* regexParser::CharacterRangeContext::charInGroup(size_t i) {
  return getRuleContext<regexParser::CharInGroupContext>(i);
}


size_t regexParser::CharacterRangeContext::getRuleIndex() const {
  return regexParser::RuleCharacterRange;
}

void regexParser::CharacterRangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterRange(this);
}

void regexParser::CharacterRangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterRange(this);
}

regexParser::CharacterRangeContext* regexParser::characterRange() {
  CharacterRangeContext *_localctx = _tracker.createInstance<CharacterRangeContext>(_ctx, getState());
  enterRule(_localctx, 20, regexParser::RuleCharacterRange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    charInGroup();
    setState(108);
    match(regexParser::T__6);
    setState(109);
    charInGroup();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterClassContext ------------------------------------------------------------------

regexParser::CharacterClassContext::CharacterClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* regexParser::CharacterClassContext::CharacterClassAnyWord() {
  return getToken(regexParser::CharacterClassAnyWord, 0);
}

tree::TerminalNode* regexParser::CharacterClassContext::CharacterClassAnyWordInverted() {
  return getToken(regexParser::CharacterClassAnyWordInverted, 0);
}

tree::TerminalNode* regexParser::CharacterClassContext::CharacterClassAnyDecimalDigit() {
  return getToken(regexParser::CharacterClassAnyDecimalDigit, 0);
}

tree::TerminalNode* regexParser::CharacterClassContext::CharacterClassAnyDecimalDigitInverted() {
  return getToken(regexParser::CharacterClassAnyDecimalDigitInverted, 0);
}

tree::TerminalNode* regexParser::CharacterClassContext::CharacterClassAnyBlank() {
  return getToken(regexParser::CharacterClassAnyBlank, 0);
}

tree::TerminalNode* regexParser::CharacterClassContext::CharacterClassAnyBlankInverted() {
  return getToken(regexParser::CharacterClassAnyBlankInverted, 0);
}


size_t regexParser::CharacterClassContext::getRuleIndex() const {
  return regexParser::RuleCharacterClass;
}

void regexParser::CharacterClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterClass(this);
}

void regexParser::CharacterClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterClass(this);
}

regexParser::CharacterClassContext* regexParser::characterClass() {
  CharacterClassContext *_localctx = _tracker.createInstance<CharacterClassContext>(_ctx, getState());
  enterRule(_localctx, 22, regexParser::RuleCharacterClass);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 516096) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantifierContext ------------------------------------------------------------------

regexParser::QuantifierContext::QuantifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::QuantifierTypeContext* regexParser::QuantifierContext::quantifierType() {
  return getRuleContext<regexParser::QuantifierTypeContext>(0);
}

regexParser::LazyModifierContext* regexParser::QuantifierContext::lazyModifier() {
  return getRuleContext<regexParser::LazyModifierContext>(0);
}


size_t regexParser::QuantifierContext::getRuleIndex() const {
  return regexParser::RuleQuantifier;
}

void regexParser::QuantifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantifier(this);
}

void regexParser::QuantifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantifier(this);
}

regexParser::QuantifierContext* regexParser::quantifier() {
  QuantifierContext *_localctx = _tracker.createInstance<QuantifierContext>(_ctx, getState());
  enterRule(_localctx, 24, regexParser::RuleQuantifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    quantifierType();
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == regexParser::ZeroOrOneQuantifier) {
      setState(114);
      lazyModifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LazyModifierContext ------------------------------------------------------------------

regexParser::LazyModifierContext::LazyModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* regexParser::LazyModifierContext::ZeroOrOneQuantifier() {
  return getToken(regexParser::ZeroOrOneQuantifier, 0);
}


size_t regexParser::LazyModifierContext::getRuleIndex() const {
  return regexParser::RuleLazyModifier;
}

void regexParser::LazyModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLazyModifier(this);
}

void regexParser::LazyModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLazyModifier(this);
}

regexParser::LazyModifierContext* regexParser::lazyModifier() {
  LazyModifierContext *_localctx = _tracker.createInstance<LazyModifierContext>(_ctx, getState());
  enterRule(_localctx, 26, regexParser::RuleLazyModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(regexParser::ZeroOrOneQuantifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantifierTypeContext ------------------------------------------------------------------

regexParser::QuantifierTypeContext::QuantifierTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* regexParser::QuantifierTypeContext::ZeroOrMoreQuantifier() {
  return getToken(regexParser::ZeroOrMoreQuantifier, 0);
}

tree::TerminalNode* regexParser::QuantifierTypeContext::OneOrMoreQuantifier() {
  return getToken(regexParser::OneOrMoreQuantifier, 0);
}

tree::TerminalNode* regexParser::QuantifierTypeContext::ZeroOrOneQuantifier() {
  return getToken(regexParser::ZeroOrOneQuantifier, 0);
}

regexParser::RangeQuantifierContext* regexParser::QuantifierTypeContext::rangeQuantifier() {
  return getRuleContext<regexParser::RangeQuantifierContext>(0);
}


size_t regexParser::QuantifierTypeContext::getRuleIndex() const {
  return regexParser::RuleQuantifierType;
}

void regexParser::QuantifierTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantifierType(this);
}

void regexParser::QuantifierTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantifierType(this);
}

regexParser::QuantifierTypeContext* regexParser::quantifierType() {
  QuantifierTypeContext *_localctx = _tracker.createInstance<QuantifierTypeContext>(_ctx, getState());
  enterRule(_localctx, 28, regexParser::RuleQuantifierType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case regexParser::ZeroOrMoreQuantifier: {
        enterOuterAlt(_localctx, 1);
        setState(119);
        match(regexParser::ZeroOrMoreQuantifier);
        break;
      }

      case regexParser::OneOrMoreQuantifier: {
        enterOuterAlt(_localctx, 2);
        setState(120);
        match(regexParser::OneOrMoreQuantifier);
        break;
      }

      case regexParser::ZeroOrOneQuantifier: {
        enterOuterAlt(_localctx, 3);
        setState(121);
        match(regexParser::ZeroOrOneQuantifier);
        break;
      }

      case regexParser::T__8: {
        enterOuterAlt(_localctx, 4);
        setState(122);
        rangeQuantifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeDelimiterContext ------------------------------------------------------------------

regexParser::RangeDelimiterContext::RangeDelimiterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t regexParser::RangeDelimiterContext::getRuleIndex() const {
  return regexParser::RuleRangeDelimiter;
}

void regexParser::RangeDelimiterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeDelimiter(this);
}

void regexParser::RangeDelimiterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeDelimiter(this);
}

regexParser::RangeDelimiterContext* regexParser::rangeDelimiter() {
  RangeDelimiterContext *_localctx = _tracker.createInstance<RangeDelimiterContext>(_ctx, getState());
  enterRule(_localctx, 30, regexParser::RuleRangeDelimiter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(regexParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeQuantifierContext ------------------------------------------------------------------

regexParser::RangeQuantifierContext::RangeQuantifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::RangeQuantifierLowerBoundContext* regexParser::RangeQuantifierContext::rangeQuantifierLowerBound() {
  return getRuleContext<regexParser::RangeQuantifierLowerBoundContext>(0);
}

regexParser::RangeDelimiterContext* regexParser::RangeQuantifierContext::rangeDelimiter() {
  return getRuleContext<regexParser::RangeDelimiterContext>(0);
}

regexParser::RangeQuantifierUpperBoundContext* regexParser::RangeQuantifierContext::rangeQuantifierUpperBound() {
  return getRuleContext<regexParser::RangeQuantifierUpperBoundContext>(0);
}


size_t regexParser::RangeQuantifierContext::getRuleIndex() const {
  return regexParser::RuleRangeQuantifier;
}

void regexParser::RangeQuantifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeQuantifier(this);
}

void regexParser::RangeQuantifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeQuantifier(this);
}

regexParser::RangeQuantifierContext* regexParser::rangeQuantifier() {
  RangeQuantifierContext *_localctx = _tracker.createInstance<RangeQuantifierContext>(_ctx, getState());
  enterRule(_localctx, 32, regexParser::RuleRangeQuantifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(regexParser::T__8);
    setState(128);
    rangeQuantifierLowerBound();
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == regexParser::T__7) {
      setState(129);
      rangeDelimiter();
    }
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == regexParser::Digit) {
      setState(132);
      rangeQuantifierUpperBound();
    }
    setState(135);
    match(regexParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeQuantifierLowerBoundContext ------------------------------------------------------------------

regexParser::RangeQuantifierLowerBoundContext::RangeQuantifierLowerBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::IntegerContext* regexParser::RangeQuantifierLowerBoundContext::integer() {
  return getRuleContext<regexParser::IntegerContext>(0);
}


size_t regexParser::RangeQuantifierLowerBoundContext::getRuleIndex() const {
  return regexParser::RuleRangeQuantifierLowerBound;
}

void regexParser::RangeQuantifierLowerBoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeQuantifierLowerBound(this);
}

void regexParser::RangeQuantifierLowerBoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeQuantifierLowerBound(this);
}

regexParser::RangeQuantifierLowerBoundContext* regexParser::rangeQuantifierLowerBound() {
  RangeQuantifierLowerBoundContext *_localctx = _tracker.createInstance<RangeQuantifierLowerBoundContext>(_ctx, getState());
  enterRule(_localctx, 34, regexParser::RuleRangeQuantifierLowerBound);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    integer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeQuantifierUpperBoundContext ------------------------------------------------------------------

regexParser::RangeQuantifierUpperBoundContext::RangeQuantifierUpperBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::IntegerContext* regexParser::RangeQuantifierUpperBoundContext::integer() {
  return getRuleContext<regexParser::IntegerContext>(0);
}


size_t regexParser::RangeQuantifierUpperBoundContext::getRuleIndex() const {
  return regexParser::RuleRangeQuantifierUpperBound;
}

void regexParser::RangeQuantifierUpperBoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeQuantifierUpperBound(this);
}

void regexParser::RangeQuantifierUpperBoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeQuantifierUpperBound(this);
}

regexParser::RangeQuantifierUpperBoundContext* regexParser::rangeQuantifierUpperBound() {
  RangeQuantifierUpperBoundContext *_localctx = _tracker.createInstance<RangeQuantifierUpperBoundContext>(_ctx, getState());
  enterRule(_localctx, 36, regexParser::RuleRangeQuantifierUpperBound);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    integer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

regexParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> regexParser::IntegerContext::Digit() {
  return getTokens(regexParser::Digit);
}

tree::TerminalNode* regexParser::IntegerContext::Digit(size_t i) {
  return getToken(regexParser::Digit, i);
}


size_t regexParser::IntegerContext::getRuleIndex() const {
  return regexParser::RuleInteger;
}

void regexParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}

void regexParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}

regexParser::IntegerContext* regexParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 38, regexParser::RuleInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(142); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(141);
              match(regexParser::Digit);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(144); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BackreferenceContext ------------------------------------------------------------------

regexParser::BackreferenceContext::BackreferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

regexParser::IntegerContext* regexParser::BackreferenceContext::integer() {
  return getRuleContext<regexParser::IntegerContext>(0);
}


size_t regexParser::BackreferenceContext::getRuleIndex() const {
  return regexParser::RuleBackreference;
}

void regexParser::BackreferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBackreference(this);
}

void regexParser::BackreferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBackreference(this);
}

regexParser::BackreferenceContext* regexParser::backreference() {
  BackreferenceContext *_localctx = _tracker.createInstance<BackreferenceContext>(_ctx, getState());
  enterRule(_localctx, 40, regexParser::RuleBackreference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(regexParser::T__10);
    setState(147);
    integer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnchorContext ------------------------------------------------------------------

regexParser::AnchorContext::AnchorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* regexParser::AnchorContext::AnchorStartOfString() {
  return getToken(regexParser::AnchorStartOfString, 0);
}

tree::TerminalNode* regexParser::AnchorContext::AnchorEndOfString() {
  return getToken(regexParser::AnchorEndOfString, 0);
}

tree::TerminalNode* regexParser::AnchorContext::AnchorWordBoundary() {
  return getToken(regexParser::AnchorWordBoundary, 0);
}

tree::TerminalNode* regexParser::AnchorContext::AnchorNonWordBoundary() {
  return getToken(regexParser::AnchorNonWordBoundary, 0);
}


size_t regexParser::AnchorContext::getRuleIndex() const {
  return regexParser::RuleAnchor;
}

void regexParser::AnchorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnchor(this);
}

void regexParser::AnchorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnchor(this);
}

regexParser::AnchorContext* regexParser::anchor() {
  AnchorContext *_localctx = _tracker.createInstance<AnchorContext>(_ctx, getState());
  enterRule(_localctx, 42, regexParser::RuleAnchor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62914560) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharContext ------------------------------------------------------------------

regexParser::CharContext::CharContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* regexParser::CharContext::EscapedChar() {
  return getToken(regexParser::EscapedChar, 0);
}

tree::TerminalNode* regexParser::CharContext::Digit() {
  return getToken(regexParser::Digit, 0);
}

tree::TerminalNode* regexParser::CharContext::Char() {
  return getToken(regexParser::Char, 0);
}


size_t regexParser::CharContext::getRuleIndex() const {
  return regexParser::RuleChar;
}

void regexParser::CharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChar(this);
}

void regexParser::CharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChar(this);
}

regexParser::CharContext* regexParser::char_() {
  CharContext *_localctx = _tracker.createInstance<CharContext>(_ctx, getState());
  enterRule(_localctx, 44, regexParser::RuleChar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 469762448) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharInGroupContext ------------------------------------------------------------------

regexParser::CharInGroupContext::CharInGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* regexParser::CharInGroupContext::EscapedChar() {
  return getToken(regexParser::EscapedChar, 0);
}

tree::TerminalNode* regexParser::CharInGroupContext::Digit() {
  return getToken(regexParser::Digit, 0);
}

tree::TerminalNode* regexParser::CharInGroupContext::Char() {
  return getToken(regexParser::Char, 0);
}

tree::TerminalNode* regexParser::CharInGroupContext::AnyCharacter() {
  return getToken(regexParser::AnyCharacter, 0);
}

tree::TerminalNode* regexParser::CharInGroupContext::AnchorStartOfString() {
  return getToken(regexParser::AnchorStartOfString, 0);
}

tree::TerminalNode* regexParser::CharInGroupContext::AnchorEndOfString() {
  return getToken(regexParser::AnchorEndOfString, 0);
}

tree::TerminalNode* regexParser::CharInGroupContext::ZeroOrMoreQuantifier() {
  return getToken(regexParser::ZeroOrMoreQuantifier, 0);
}

tree::TerminalNode* regexParser::CharInGroupContext::OneOrMoreQuantifier() {
  return getToken(regexParser::OneOrMoreQuantifier, 0);
}

tree::TerminalNode* regexParser::CharInGroupContext::ZeroOrOneQuantifier() {
  return getToken(regexParser::ZeroOrOneQuantifier, 0);
}


size_t regexParser::CharInGroupContext::getRuleIndex() const {
  return regexParser::RuleCharInGroup;
}

void regexParser::CharInGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharInGroup(this);
}

void regexParser::CharInGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<regexListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharInGroup(this);
}

regexParser::CharInGroupContext* regexParser::charInGroup() {
  CharInGroupContext *_localctx = _tracker.createInstance<CharInGroupContext>(_ctx, getState());
  enterRule(_localctx, 46, regexParser::RuleCharInGroup);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 511186750) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void regexParser::initialize() {
  ::antlr4::internal::call_once(regexParserOnceFlag, regexParserInitialize);
}
