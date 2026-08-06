# Generated from regex.g4 by ANTLR 4.12.0
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
    from typing import TextIO
else:
    from typing.io import TextIO


def serializedATN():
    return [
        4,0,28,128,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,
        2,6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,
        13,7,13,2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,
        19,2,20,7,20,2,21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,
        26,7,26,2,27,7,27,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,
        5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,
        1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,
        1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,
        1,22,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,
        3,25,123,8,25,1,26,1,26,1,27,1,27,0,0,28,1,1,3,2,5,3,7,4,9,5,11,
        6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,
        35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,
        1,0,2,1,0,48,57,3,0,48,57,65,70,97,102,128,0,1,1,0,0,0,0,3,1,0,0,
        0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,
        0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,
        0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,
        0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,
        0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,
        0,55,1,0,0,0,1,57,1,0,0,0,3,59,1,0,0,0,5,61,1,0,0,0,7,63,1,0,0,0,
        9,65,1,0,0,0,11,67,1,0,0,0,13,69,1,0,0,0,15,71,1,0,0,0,17,73,1,0,
        0,0,19,75,1,0,0,0,21,77,1,0,0,0,23,79,1,0,0,0,25,81,1,0,0,0,27,84,
        1,0,0,0,29,87,1,0,0,0,31,90,1,0,0,0,33,93,1,0,0,0,35,96,1,0,0,0,
        37,99,1,0,0,0,39,101,1,0,0,0,41,103,1,0,0,0,43,105,1,0,0,0,45,107,
        1,0,0,0,47,110,1,0,0,0,49,113,1,0,0,0,51,122,1,0,0,0,53,124,1,0,
        0,0,55,126,1,0,0,0,57,58,5,124,0,0,58,2,1,0,0,0,59,60,5,40,0,0,60,
        4,1,0,0,0,61,62,5,41,0,0,62,6,1,0,0,0,63,64,5,58,0,0,64,8,1,0,0,
        0,65,66,5,91,0,0,66,10,1,0,0,0,67,68,5,93,0,0,68,12,1,0,0,0,69,70,
        5,45,0,0,70,14,1,0,0,0,71,72,5,44,0,0,72,16,1,0,0,0,73,74,5,123,
        0,0,74,18,1,0,0,0,75,76,5,125,0,0,76,20,1,0,0,0,77,78,5,92,0,0,78,
        22,1,0,0,0,79,80,5,46,0,0,80,24,1,0,0,0,81,82,5,92,0,0,82,83,5,119,
        0,0,83,26,1,0,0,0,84,85,5,92,0,0,85,86,5,87,0,0,86,28,1,0,0,0,87,
        88,5,92,0,0,88,89,5,100,0,0,89,30,1,0,0,0,90,91,5,92,0,0,91,92,5,
        68,0,0,92,32,1,0,0,0,93,94,5,92,0,0,94,95,5,115,0,0,95,34,1,0,0,
        0,96,97,5,92,0,0,97,98,5,83,0,0,98,36,1,0,0,0,99,100,5,42,0,0,100,
        38,1,0,0,0,101,102,5,43,0,0,102,40,1,0,0,0,103,104,5,63,0,0,104,
        42,1,0,0,0,105,106,5,94,0,0,106,44,1,0,0,0,107,108,5,92,0,0,108,
        109,5,98,0,0,109,46,1,0,0,0,110,111,5,92,0,0,111,112,5,66,0,0,112,
        48,1,0,0,0,113,114,5,36,0,0,114,50,1,0,0,0,115,116,5,92,0,0,116,
        123,8,0,0,0,117,118,5,92,0,0,118,119,5,120,0,0,119,120,1,0,0,0,120,
        121,7,1,0,0,121,123,7,1,0,0,122,115,1,0,0,0,122,117,1,0,0,0,123,
        52,1,0,0,0,124,125,7,0,0,0,125,54,1,0,0,0,126,127,9,0,0,0,127,56,
        1,0,0,0,2,0,122,0
    ]

class regexLexer(Lexer):

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    T__0 = 1
    T__1 = 2
    T__2 = 3
    T__3 = 4
    T__4 = 5
    T__5 = 6
    T__6 = 7
    T__7 = 8
    T__8 = 9
    T__9 = 10
    T__10 = 11
    AnyCharacter = 12
    CharacterClassAnyWord = 13
    CharacterClassAnyWordInverted = 14
    CharacterClassAnyDecimalDigit = 15
    CharacterClassAnyDecimalDigitInverted = 16
    CharacterClassAnyBlank = 17
    CharacterClassAnyBlankInverted = 18
    ZeroOrMoreQuantifier = 19
    OneOrMoreQuantifier = 20
    ZeroOrOneQuantifier = 21
    AnchorStartOfString = 22
    AnchorWordBoundary = 23
    AnchorNonWordBoundary = 24
    AnchorEndOfString = 25
    EscapedChar = 26
    Digit = 27
    Char = 28

    channelNames = [ u"DEFAULT_TOKEN_CHANNEL", u"HIDDEN" ]

    modeNames = [ "DEFAULT_MODE" ]

    literalNames = [ "<INVALID>",
            "'|'", "'('", "')'", "':'", "'['", "']'", "'-'", "','", "'{'", 
            "'}'", "'\\'", "'.'", "'\\w'", "'\\W'", "'\\d'", "'\\D'", "'\\s'", 
            "'\\S'", "'*'", "'+'", "'?'", "'^'", "'\\b'", "'\\B'", "'$'" ]

    symbolicNames = [ "<INVALID>",
            "AnyCharacter", "CharacterClassAnyWord", "CharacterClassAnyWordInverted", 
            "CharacterClassAnyDecimalDigit", "CharacterClassAnyDecimalDigitInverted", 
            "CharacterClassAnyBlank", "CharacterClassAnyBlankInverted", 
            "ZeroOrMoreQuantifier", "OneOrMoreQuantifier", "ZeroOrOneQuantifier", 
            "AnchorStartOfString", "AnchorWordBoundary", "AnchorNonWordBoundary", 
            "AnchorEndOfString", "EscapedChar", "Digit", "Char" ]

    ruleNames = [ "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", 
                  "T__7", "T__8", "T__9", "T__10", "AnyCharacter", "CharacterClassAnyWord", 
                  "CharacterClassAnyWordInverted", "CharacterClassAnyDecimalDigit", 
                  "CharacterClassAnyDecimalDigitInverted", "CharacterClassAnyBlank", 
                  "CharacterClassAnyBlankInverted", "ZeroOrMoreQuantifier", 
                  "OneOrMoreQuantifier", "ZeroOrOneQuantifier", "AnchorStartOfString", 
                  "AnchorWordBoundary", "AnchorNonWordBoundary", "AnchorEndOfString", 
                  "EscapedChar", "Digit", "Char" ]

    grammarFileName = "regex.g4"

    def __init__(self, input=None, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.12.0")
        self._interp = LexerATNSimulator(self, self.atn, self.decisionsToDFA, PredictionContextCache())
        self._actions = None
        self._predicates = None


