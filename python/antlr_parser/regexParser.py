# Generated from regex.g4 by ANTLR 4.12.0
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,28,156,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,
        2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,
        7,20,2,21,7,21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,5,0,52,8,0,10,0,12,
        0,55,9,0,1,1,4,1,58,8,1,11,1,12,1,59,1,2,1,2,3,2,64,8,2,1,2,3,2,
        67,8,2,1,3,1,3,1,3,3,3,72,8,3,1,4,1,4,3,4,76,8,4,1,4,1,4,1,4,1,5,
        1,5,1,5,1,6,1,6,1,6,1,6,3,6,88,8,6,1,7,1,7,3,7,92,8,7,1,7,4,7,95,
        8,7,11,7,12,7,96,1,7,1,7,1,8,1,8,1,9,1,9,1,9,3,9,106,8,9,1,10,1,
        10,1,10,1,10,1,11,1,11,1,12,1,12,3,12,116,8,12,1,13,1,13,1,14,1,
        14,1,14,1,14,3,14,124,8,14,1,15,1,15,1,16,1,16,1,16,3,16,131,8,16,
        1,16,3,16,134,8,16,1,16,1,16,1,17,1,17,1,18,1,18,1,19,4,19,143,8,
        19,11,19,12,19,144,1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,
        1,23,0,0,24,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
        38,40,42,44,46,0,4,1,0,13,18,1,0,22,25,3,0,4,4,7,8,26,28,5,0,1,5,
        8,10,12,12,19,22,25,28,152,0,48,1,0,0,0,2,57,1,0,0,0,4,66,1,0,0,
        0,6,71,1,0,0,0,8,73,1,0,0,0,10,80,1,0,0,0,12,87,1,0,0,0,14,89,1,
        0,0,0,16,100,1,0,0,0,18,105,1,0,0,0,20,107,1,0,0,0,22,111,1,0,0,
        0,24,113,1,0,0,0,26,117,1,0,0,0,28,123,1,0,0,0,30,125,1,0,0,0,32,
        127,1,0,0,0,34,137,1,0,0,0,36,139,1,0,0,0,38,142,1,0,0,0,40,146,
        1,0,0,0,42,149,1,0,0,0,44,151,1,0,0,0,46,153,1,0,0,0,48,53,3,2,1,
        0,49,50,5,1,0,0,50,52,3,2,1,0,51,49,1,0,0,0,52,55,1,0,0,0,53,51,
        1,0,0,0,53,54,1,0,0,0,54,1,1,0,0,0,55,53,1,0,0,0,56,58,3,4,2,0,57,
        56,1,0,0,0,58,59,1,0,0,0,59,57,1,0,0,0,59,60,1,0,0,0,60,3,1,0,0,
        0,61,63,3,6,3,0,62,64,3,24,12,0,63,62,1,0,0,0,63,64,1,0,0,0,64,67,
        1,0,0,0,65,67,3,42,21,0,66,61,1,0,0,0,66,65,1,0,0,0,67,5,1,0,0,0,
        68,72,3,12,6,0,69,72,3,8,4,0,70,72,3,40,20,0,71,68,1,0,0,0,71,69,
        1,0,0,0,71,70,1,0,0,0,72,7,1,0,0,0,73,75,5,2,0,0,74,76,3,10,5,0,
        75,74,1,0,0,0,75,76,1,0,0,0,76,77,1,0,0,0,77,78,3,0,0,0,78,79,5,
        3,0,0,79,9,1,0,0,0,80,81,5,21,0,0,81,82,5,4,0,0,82,11,1,0,0,0,83,
        88,3,44,22,0,84,88,3,22,11,0,85,88,5,12,0,0,86,88,3,14,7,0,87,83,
        1,0,0,0,87,84,1,0,0,0,87,85,1,0,0,0,87,86,1,0,0,0,88,13,1,0,0,0,
        89,91,5,5,0,0,90,92,3,16,8,0,91,90,1,0,0,0,91,92,1,0,0,0,92,94,1,
        0,0,0,93,95,3,18,9,0,94,93,1,0,0,0,95,96,1,0,0,0,96,94,1,0,0,0,96,
        97,1,0,0,0,97,98,1,0,0,0,98,99,5,6,0,0,99,15,1,0,0,0,100,101,5,22,
        0,0,101,17,1,0,0,0,102,106,3,46,23,0,103,106,3,22,11,0,104,106,3,
        20,10,0,105,102,1,0,0,0,105,103,1,0,0,0,105,104,1,0,0,0,106,19,1,
        0,0,0,107,108,3,46,23,0,108,109,5,7,0,0,109,110,3,46,23,0,110,21,
        1,0,0,0,111,112,7,0,0,0,112,23,1,0,0,0,113,115,3,28,14,0,114,116,
        3,26,13,0,115,114,1,0,0,0,115,116,1,0,0,0,116,25,1,0,0,0,117,118,
        5,21,0,0,118,27,1,0,0,0,119,124,5,19,0,0,120,124,5,20,0,0,121,124,
        5,21,0,0,122,124,3,32,16,0,123,119,1,0,0,0,123,120,1,0,0,0,123,121,
        1,0,0,0,123,122,1,0,0,0,124,29,1,0,0,0,125,126,5,8,0,0,126,31,1,
        0,0,0,127,128,5,9,0,0,128,130,3,34,17,0,129,131,3,30,15,0,130,129,
        1,0,0,0,130,131,1,0,0,0,131,133,1,0,0,0,132,134,3,36,18,0,133,132,
        1,0,0,0,133,134,1,0,0,0,134,135,1,0,0,0,135,136,5,10,0,0,136,33,
        1,0,0,0,137,138,3,38,19,0,138,35,1,0,0,0,139,140,3,38,19,0,140,37,
        1,0,0,0,141,143,5,27,0,0,142,141,1,0,0,0,143,144,1,0,0,0,144,142,
        1,0,0,0,144,145,1,0,0,0,145,39,1,0,0,0,146,147,5,11,0,0,147,148,
        3,38,19,0,148,41,1,0,0,0,149,150,7,1,0,0,150,43,1,0,0,0,151,152,
        7,2,0,0,152,45,1,0,0,0,153,154,7,3,0,0,154,47,1,0,0,0,15,53,59,63,
        66,71,75,87,91,96,105,115,123,130,133,144
    ]

class regexParser ( Parser ):

    grammarFileName = "regex.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'|'", "'('", "')'", "':'", "'['", "']'", 
                     "'-'", "','", "'{'", "'}'", "'\\'", "'.'", "'\\w'", 
                     "'\\W'", "'\\d'", "'\\D'", "'\\s'", "'\\S'", "'*'", 
                     "'+'", "'?'", "'^'", "'\\b'", "'\\B'", "'$'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "AnyCharacter", "CharacterClassAnyWord", "CharacterClassAnyWordInverted", 
                      "CharacterClassAnyDecimalDigit", "CharacterClassAnyDecimalDigitInverted", 
                      "CharacterClassAnyBlank", "CharacterClassAnyBlankInverted", 
                      "ZeroOrMoreQuantifier", "OneOrMoreQuantifier", "ZeroOrOneQuantifier", 
                      "AnchorStartOfString", "AnchorWordBoundary", "AnchorNonWordBoundary", 
                      "AnchorEndOfString", "EscapedChar", "Digit", "Char" ]

    RULE_regex = 0
    RULE_expression = 1
    RULE_expressionItem = 2
    RULE_normalItem = 3
    RULE_group = 4
    RULE_groupNonCapturingModifier = 5
    RULE_single = 6
    RULE_characterGroup = 7
    RULE_characterGroupNegativeModifier = 8
    RULE_characterGroupItem = 9
    RULE_characterRange = 10
    RULE_characterClass = 11
    RULE_quantifier = 12
    RULE_lazyModifier = 13
    RULE_quantifierType = 14
    RULE_rangeDelimiter = 15
    RULE_rangeQuantifier = 16
    RULE_rangeQuantifierLowerBound = 17
    RULE_rangeQuantifierUpperBound = 18
    RULE_integer = 19
    RULE_backreference = 20
    RULE_anchor = 21
    RULE_char = 22
    RULE_charInGroup = 23

    ruleNames =  [ "regex", "expression", "expressionItem", "normalItem", 
                   "group", "groupNonCapturingModifier", "single", "characterGroup", 
                   "characterGroupNegativeModifier", "characterGroupItem", 
                   "characterRange", "characterClass", "quantifier", "lazyModifier", 
                   "quantifierType", "rangeDelimiter", "rangeQuantifier", 
                   "rangeQuantifierLowerBound", "rangeQuantifierUpperBound", 
                   "integer", "backreference", "anchor", "char", "charInGroup" ]

    EOF = Token.EOF
    T__0=1
    T__1=2
    T__2=3
    T__3=4
    T__4=5
    T__5=6
    T__6=7
    T__7=8
    T__8=9
    T__9=10
    T__10=11
    AnyCharacter=12
    CharacterClassAnyWord=13
    CharacterClassAnyWordInverted=14
    CharacterClassAnyDecimalDigit=15
    CharacterClassAnyDecimalDigitInverted=16
    CharacterClassAnyBlank=17
    CharacterClassAnyBlankInverted=18
    ZeroOrMoreQuantifier=19
    OneOrMoreQuantifier=20
    ZeroOrOneQuantifier=21
    AnchorStartOfString=22
    AnchorWordBoundary=23
    AnchorNonWordBoundary=24
    AnchorEndOfString=25
    EscapedChar=26
    Digit=27
    Char=28

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.12.0")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class RegexContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expression(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(regexParser.ExpressionContext)
            else:
                return self.getTypedRuleContext(regexParser.ExpressionContext,i)


        def getRuleIndex(self):
            return regexParser.RULE_regex

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterRegex" ):
                listener.enterRegex(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitRegex" ):
                listener.exitRegex(self)




    def regex(self):

        localctx = regexParser.RegexContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_regex)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 48
            self.expression()
            self.state = 53
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==1:
                self.state = 49
                self.match(regexParser.T__0)
                self.state = 50
                self.expression()
                self.state = 55
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExpressionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def expressionItem(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(regexParser.ExpressionItemContext)
            else:
                return self.getTypedRuleContext(regexParser.ExpressionItemContext,i)


        def getRuleIndex(self):
            return regexParser.RULE_expression

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpression" ):
                listener.enterExpression(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpression" ):
                listener.exitExpression(self)




    def expression(self):

        localctx = regexParser.ExpressionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_expression)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 57 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 56
                self.expressionItem()
                self.state = 59 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 533199284) != 0)):
                    break

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExpressionItemContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def normalItem(self):
            return self.getTypedRuleContext(regexParser.NormalItemContext,0)


        def quantifier(self):
            return self.getTypedRuleContext(regexParser.QuantifierContext,0)


        def anchor(self):
            return self.getTypedRuleContext(regexParser.AnchorContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_expressionItem

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpressionItem" ):
                listener.enterExpressionItem(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpressionItem" ):
                listener.exitExpressionItem(self)




    def expressionItem(self):

        localctx = regexParser.ExpressionItemContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_expressionItem)
        self._la = 0 # Token type
        try:
            self.state = 66
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [2, 4, 5, 7, 8, 11, 12, 13, 14, 15, 16, 17, 18, 26, 27, 28]:
                self.enterOuterAlt(localctx, 1)
                self.state = 61
                self.normalItem()
                self.state = 63
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if (((_la) & ~0x3f) == 0 and ((1 << _la) & 3670528) != 0):
                    self.state = 62
                    self.quantifier()


                pass
            elif token in [22, 23, 24, 25]:
                self.enterOuterAlt(localctx, 2)
                self.state = 65
                self.anchor()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class NormalItemContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def single(self):
            return self.getTypedRuleContext(regexParser.SingleContext,0)


        def group(self):
            return self.getTypedRuleContext(regexParser.GroupContext,0)


        def backreference(self):
            return self.getTypedRuleContext(regexParser.BackreferenceContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_normalItem

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterNormalItem" ):
                listener.enterNormalItem(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitNormalItem" ):
                listener.exitNormalItem(self)




    def normalItem(self):

        localctx = regexParser.NormalItemContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_normalItem)
        try:
            self.state = 71
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [4, 5, 7, 8, 12, 13, 14, 15, 16, 17, 18, 26, 27, 28]:
                self.enterOuterAlt(localctx, 1)
                self.state = 68
                self.single()
                pass
            elif token in [2]:
                self.enterOuterAlt(localctx, 2)
                self.state = 69
                self.group()
                pass
            elif token in [11]:
                self.enterOuterAlt(localctx, 3)
                self.state = 70
                self.backreference()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class GroupContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def regex(self):
            return self.getTypedRuleContext(regexParser.RegexContext,0)


        def groupNonCapturingModifier(self):
            return self.getTypedRuleContext(regexParser.GroupNonCapturingModifierContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_group

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterGroup" ):
                listener.enterGroup(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitGroup" ):
                listener.exitGroup(self)




    def group(self):

        localctx = regexParser.GroupContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_group)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 73
            self.match(regexParser.T__1)
            self.state = 75
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==21:
                self.state = 74
                self.groupNonCapturingModifier()


            self.state = 77
            self.regex()
            self.state = 78
            self.match(regexParser.T__2)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class GroupNonCapturingModifierContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ZeroOrOneQuantifier(self):
            return self.getToken(regexParser.ZeroOrOneQuantifier, 0)

        def getRuleIndex(self):
            return regexParser.RULE_groupNonCapturingModifier

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterGroupNonCapturingModifier" ):
                listener.enterGroupNonCapturingModifier(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitGroupNonCapturingModifier" ):
                listener.exitGroupNonCapturingModifier(self)




    def groupNonCapturingModifier(self):

        localctx = regexParser.GroupNonCapturingModifierContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_groupNonCapturingModifier)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 80
            self.match(regexParser.ZeroOrOneQuantifier)
            self.state = 81
            self.match(regexParser.T__3)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class SingleContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def char(self):
            return self.getTypedRuleContext(regexParser.CharContext,0)


        def characterClass(self):
            return self.getTypedRuleContext(regexParser.CharacterClassContext,0)


        def AnyCharacter(self):
            return self.getToken(regexParser.AnyCharacter, 0)

        def characterGroup(self):
            return self.getTypedRuleContext(regexParser.CharacterGroupContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_single

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterSingle" ):
                listener.enterSingle(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitSingle" ):
                listener.exitSingle(self)




    def single(self):

        localctx = regexParser.SingleContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_single)
        try:
            self.state = 87
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [4, 7, 8, 26, 27, 28]:
                self.enterOuterAlt(localctx, 1)
                self.state = 83
                self.char()
                pass
            elif token in [13, 14, 15, 16, 17, 18]:
                self.enterOuterAlt(localctx, 2)
                self.state = 84
                self.characterClass()
                pass
            elif token in [12]:
                self.enterOuterAlt(localctx, 3)
                self.state = 85
                self.match(regexParser.AnyCharacter)
                pass
            elif token in [5]:
                self.enterOuterAlt(localctx, 4)
                self.state = 86
                self.characterGroup()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class CharacterGroupContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def characterGroupNegativeModifier(self):
            return self.getTypedRuleContext(regexParser.CharacterGroupNegativeModifierContext,0)


        def characterGroupItem(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(regexParser.CharacterGroupItemContext)
            else:
                return self.getTypedRuleContext(regexParser.CharacterGroupItemContext,i)


        def getRuleIndex(self):
            return regexParser.RULE_characterGroup

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterCharacterGroup" ):
                listener.enterCharacterGroup(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitCharacterGroup" ):
                listener.exitCharacterGroup(self)




    def characterGroup(self):

        localctx = regexParser.CharacterGroupContext(self, self._ctx, self.state)
        self.enterRule(localctx, 14, self.RULE_characterGroup)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 89
            self.match(regexParser.T__4)
            self.state = 91
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
            if la_ == 1:
                self.state = 90
                self.characterGroupNegativeModifier()


            self.state = 94 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 93
                self.characterGroupItem()
                self.state = 96 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 511702846) != 0)):
                    break

            self.state = 98
            self.match(regexParser.T__5)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class CharacterGroupNegativeModifierContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def AnchorStartOfString(self):
            return self.getToken(regexParser.AnchorStartOfString, 0)

        def getRuleIndex(self):
            return regexParser.RULE_characterGroupNegativeModifier

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterCharacterGroupNegativeModifier" ):
                listener.enterCharacterGroupNegativeModifier(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitCharacterGroupNegativeModifier" ):
                listener.exitCharacterGroupNegativeModifier(self)




    def characterGroupNegativeModifier(self):

        localctx = regexParser.CharacterGroupNegativeModifierContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_characterGroupNegativeModifier)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 100
            self.match(regexParser.AnchorStartOfString)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class CharacterGroupItemContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def charInGroup(self):
            return self.getTypedRuleContext(regexParser.CharInGroupContext,0)


        def characterClass(self):
            return self.getTypedRuleContext(regexParser.CharacterClassContext,0)


        def characterRange(self):
            return self.getTypedRuleContext(regexParser.CharacterRangeContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_characterGroupItem

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterCharacterGroupItem" ):
                listener.enterCharacterGroupItem(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitCharacterGroupItem" ):
                listener.exitCharacterGroupItem(self)




    def characterGroupItem(self):

        localctx = regexParser.CharacterGroupItemContext(self, self._ctx, self.state)
        self.enterRule(localctx, 18, self.RULE_characterGroupItem)
        try:
            self.state = 105
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,9,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 102
                self.charInGroup()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 103
                self.characterClass()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 104
                self.characterRange()
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class CharacterRangeContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def charInGroup(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(regexParser.CharInGroupContext)
            else:
                return self.getTypedRuleContext(regexParser.CharInGroupContext,i)


        def getRuleIndex(self):
            return regexParser.RULE_characterRange

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterCharacterRange" ):
                listener.enterCharacterRange(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitCharacterRange" ):
                listener.exitCharacterRange(self)




    def characterRange(self):

        localctx = regexParser.CharacterRangeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 20, self.RULE_characterRange)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 107
            self.charInGroup()
            self.state = 108
            self.match(regexParser.T__6)
            self.state = 109
            self.charInGroup()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class CharacterClassContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def CharacterClassAnyWord(self):
            return self.getToken(regexParser.CharacterClassAnyWord, 0)

        def CharacterClassAnyWordInverted(self):
            return self.getToken(regexParser.CharacterClassAnyWordInverted, 0)

        def CharacterClassAnyDecimalDigit(self):
            return self.getToken(regexParser.CharacterClassAnyDecimalDigit, 0)

        def CharacterClassAnyDecimalDigitInverted(self):
            return self.getToken(regexParser.CharacterClassAnyDecimalDigitInverted, 0)

        def CharacterClassAnyBlank(self):
            return self.getToken(regexParser.CharacterClassAnyBlank, 0)

        def CharacterClassAnyBlankInverted(self):
            return self.getToken(regexParser.CharacterClassAnyBlankInverted, 0)

        def getRuleIndex(self):
            return regexParser.RULE_characterClass

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterCharacterClass" ):
                listener.enterCharacterClass(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitCharacterClass" ):
                listener.exitCharacterClass(self)




    def characterClass(self):

        localctx = regexParser.CharacterClassContext(self, self._ctx, self.state)
        self.enterRule(localctx, 22, self.RULE_characterClass)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 111
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 516096) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class QuantifierContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def quantifierType(self):
            return self.getTypedRuleContext(regexParser.QuantifierTypeContext,0)


        def lazyModifier(self):
            return self.getTypedRuleContext(regexParser.LazyModifierContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_quantifier

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterQuantifier" ):
                listener.enterQuantifier(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitQuantifier" ):
                listener.exitQuantifier(self)




    def quantifier(self):

        localctx = regexParser.QuantifierContext(self, self._ctx, self.state)
        self.enterRule(localctx, 24, self.RULE_quantifier)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 113
            self.quantifierType()
            self.state = 115
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==21:
                self.state = 114
                self.lazyModifier()


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class LazyModifierContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ZeroOrOneQuantifier(self):
            return self.getToken(regexParser.ZeroOrOneQuantifier, 0)

        def getRuleIndex(self):
            return regexParser.RULE_lazyModifier

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterLazyModifier" ):
                listener.enterLazyModifier(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitLazyModifier" ):
                listener.exitLazyModifier(self)




    def lazyModifier(self):

        localctx = regexParser.LazyModifierContext(self, self._ctx, self.state)
        self.enterRule(localctx, 26, self.RULE_lazyModifier)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 117
            self.match(regexParser.ZeroOrOneQuantifier)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class QuantifierTypeContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ZeroOrMoreQuantifier(self):
            return self.getToken(regexParser.ZeroOrMoreQuantifier, 0)

        def OneOrMoreQuantifier(self):
            return self.getToken(regexParser.OneOrMoreQuantifier, 0)

        def ZeroOrOneQuantifier(self):
            return self.getToken(regexParser.ZeroOrOneQuantifier, 0)

        def rangeQuantifier(self):
            return self.getTypedRuleContext(regexParser.RangeQuantifierContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_quantifierType

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterQuantifierType" ):
                listener.enterQuantifierType(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitQuantifierType" ):
                listener.exitQuantifierType(self)




    def quantifierType(self):

        localctx = regexParser.QuantifierTypeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 28, self.RULE_quantifierType)
        try:
            self.state = 123
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [19]:
                self.enterOuterAlt(localctx, 1)
                self.state = 119
                self.match(regexParser.ZeroOrMoreQuantifier)
                pass
            elif token in [20]:
                self.enterOuterAlt(localctx, 2)
                self.state = 120
                self.match(regexParser.OneOrMoreQuantifier)
                pass
            elif token in [21]:
                self.enterOuterAlt(localctx, 3)
                self.state = 121
                self.match(regexParser.ZeroOrOneQuantifier)
                pass
            elif token in [9]:
                self.enterOuterAlt(localctx, 4)
                self.state = 122
                self.rangeQuantifier()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class RangeDelimiterContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return regexParser.RULE_rangeDelimiter

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterRangeDelimiter" ):
                listener.enterRangeDelimiter(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitRangeDelimiter" ):
                listener.exitRangeDelimiter(self)




    def rangeDelimiter(self):

        localctx = regexParser.RangeDelimiterContext(self, self._ctx, self.state)
        self.enterRule(localctx, 30, self.RULE_rangeDelimiter)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 125
            self.match(regexParser.T__7)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class RangeQuantifierContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def rangeQuantifierLowerBound(self):
            return self.getTypedRuleContext(regexParser.RangeQuantifierLowerBoundContext,0)


        def rangeDelimiter(self):
            return self.getTypedRuleContext(regexParser.RangeDelimiterContext,0)


        def rangeQuantifierUpperBound(self):
            return self.getTypedRuleContext(regexParser.RangeQuantifierUpperBoundContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_rangeQuantifier

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterRangeQuantifier" ):
                listener.enterRangeQuantifier(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitRangeQuantifier" ):
                listener.exitRangeQuantifier(self)




    def rangeQuantifier(self):

        localctx = regexParser.RangeQuantifierContext(self, self._ctx, self.state)
        self.enterRule(localctx, 32, self.RULE_rangeQuantifier)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 127
            self.match(regexParser.T__8)
            self.state = 128
            self.rangeQuantifierLowerBound()
            self.state = 130
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==8:
                self.state = 129
                self.rangeDelimiter()


            self.state = 133
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==27:
                self.state = 132
                self.rangeQuantifierUpperBound()


            self.state = 135
            self.match(regexParser.T__9)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class RangeQuantifierLowerBoundContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def integer(self):
            return self.getTypedRuleContext(regexParser.IntegerContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_rangeQuantifierLowerBound

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterRangeQuantifierLowerBound" ):
                listener.enterRangeQuantifierLowerBound(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitRangeQuantifierLowerBound" ):
                listener.exitRangeQuantifierLowerBound(self)




    def rangeQuantifierLowerBound(self):

        localctx = regexParser.RangeQuantifierLowerBoundContext(self, self._ctx, self.state)
        self.enterRule(localctx, 34, self.RULE_rangeQuantifierLowerBound)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 137
            self.integer()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class RangeQuantifierUpperBoundContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def integer(self):
            return self.getTypedRuleContext(regexParser.IntegerContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_rangeQuantifierUpperBound

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterRangeQuantifierUpperBound" ):
                listener.enterRangeQuantifierUpperBound(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitRangeQuantifierUpperBound" ):
                listener.exitRangeQuantifierUpperBound(self)




    def rangeQuantifierUpperBound(self):

        localctx = regexParser.RangeQuantifierUpperBoundContext(self, self._ctx, self.state)
        self.enterRule(localctx, 36, self.RULE_rangeQuantifierUpperBound)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 139
            self.integer()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class IntegerContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def Digit(self, i:int=None):
            if i is None:
                return self.getTokens(regexParser.Digit)
            else:
                return self.getToken(regexParser.Digit, i)

        def getRuleIndex(self):
            return regexParser.RULE_integer

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterInteger" ):
                listener.enterInteger(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitInteger" ):
                listener.exitInteger(self)




    def integer(self):

        localctx = regexParser.IntegerContext(self, self._ctx, self.state)
        self.enterRule(localctx, 38, self.RULE_integer)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 142 
            self._errHandler.sync(self)
            _alt = 1
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt == 1:
                    self.state = 141
                    self.match(regexParser.Digit)

                else:
                    raise NoViableAltException(self)
                self.state = 144 
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,14,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class BackreferenceContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def integer(self):
            return self.getTypedRuleContext(regexParser.IntegerContext,0)


        def getRuleIndex(self):
            return regexParser.RULE_backreference

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterBackreference" ):
                listener.enterBackreference(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitBackreference" ):
                listener.exitBackreference(self)




    def backreference(self):

        localctx = regexParser.BackreferenceContext(self, self._ctx, self.state)
        self.enterRule(localctx, 40, self.RULE_backreference)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 146
            self.match(regexParser.T__10)
            self.state = 147
            self.integer()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class AnchorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def AnchorStartOfString(self):
            return self.getToken(regexParser.AnchorStartOfString, 0)

        def AnchorEndOfString(self):
            return self.getToken(regexParser.AnchorEndOfString, 0)

        def AnchorWordBoundary(self):
            return self.getToken(regexParser.AnchorWordBoundary, 0)

        def AnchorNonWordBoundary(self):
            return self.getToken(regexParser.AnchorNonWordBoundary, 0)

        def getRuleIndex(self):
            return regexParser.RULE_anchor

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAnchor" ):
                listener.enterAnchor(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAnchor" ):
                listener.exitAnchor(self)




    def anchor(self):

        localctx = regexParser.AnchorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 42, self.RULE_anchor)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 149
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 62914560) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class CharContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def EscapedChar(self):
            return self.getToken(regexParser.EscapedChar, 0)

        def Digit(self):
            return self.getToken(regexParser.Digit, 0)

        def Char(self):
            return self.getToken(regexParser.Char, 0)

        def getRuleIndex(self):
            return regexParser.RULE_char

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterChar" ):
                listener.enterChar(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitChar" ):
                listener.exitChar(self)




    def char(self):

        localctx = regexParser.CharContext(self, self._ctx, self.state)
        self.enterRule(localctx, 44, self.RULE_char)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 151
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 469762448) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class CharInGroupContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def EscapedChar(self):
            return self.getToken(regexParser.EscapedChar, 0)

        def Digit(self):
            return self.getToken(regexParser.Digit, 0)

        def Char(self):
            return self.getToken(regexParser.Char, 0)

        def AnyCharacter(self):
            return self.getToken(regexParser.AnyCharacter, 0)

        def AnchorStartOfString(self):
            return self.getToken(regexParser.AnchorStartOfString, 0)

        def AnchorEndOfString(self):
            return self.getToken(regexParser.AnchorEndOfString, 0)

        def ZeroOrMoreQuantifier(self):
            return self.getToken(regexParser.ZeroOrMoreQuantifier, 0)

        def OneOrMoreQuantifier(self):
            return self.getToken(regexParser.OneOrMoreQuantifier, 0)

        def ZeroOrOneQuantifier(self):
            return self.getToken(regexParser.ZeroOrOneQuantifier, 0)

        def getRuleIndex(self):
            return regexParser.RULE_charInGroup

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterCharInGroup" ):
                listener.enterCharInGroup(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitCharInGroup" ):
                listener.exitCharInGroup(self)




    def charInGroup(self):

        localctx = regexParser.CharInGroupContext(self, self._ctx, self.state)
        self.enterRule(localctx, 46, self.RULE_charInGroup)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 153
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 511186750) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





