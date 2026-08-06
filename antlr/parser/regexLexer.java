// Generated from regex.g4 by ANTLR 4.12.0
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class regexLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.12.0", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, AnyCharacter=12, CharacterClassAnyWord=13, CharacterClassAnyWordInverted=14, 
		CharacterClassAnyDecimalDigit=15, CharacterClassAnyDecimalDigitInverted=16, 
		CharacterClassAnyBlank=17, CharacterClassAnyBlankInverted=18, ZeroOrMoreQuantifier=19, 
		OneOrMoreQuantifier=20, ZeroOrOneQuantifier=21, AnchorStartOfString=22, 
		AnchorWordBoundary=23, AnchorNonWordBoundary=24, AnchorEndOfString=25, 
		EscapedChar=26, Digit=27, Char=28;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "AnyCharacter", "CharacterClassAnyWord", "CharacterClassAnyWordInverted", 
			"CharacterClassAnyDecimalDigit", "CharacterClassAnyDecimalDigitInverted", 
			"CharacterClassAnyBlank", "CharacterClassAnyBlankInverted", "ZeroOrMoreQuantifier", 
			"OneOrMoreQuantifier", "ZeroOrOneQuantifier", "AnchorStartOfString", 
			"AnchorWordBoundary", "AnchorNonWordBoundary", "AnchorEndOfString", "EscapedChar", 
			"Digit", "Char"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'|'", "'('", "')'", "':'", "'['", "']'", "'-'", "','", "'{'", 
			"'}'", "'\\'", "'.'", "'\\w'", "'\\W'", "'\\d'", "'\\D'", "'\\s'", "'\\S'", 
			"'*'", "'+'", "'?'", "'^'", "'\\b'", "'\\B'", "'$'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			"AnyCharacter", "CharacterClassAnyWord", "CharacterClassAnyWordInverted", 
			"CharacterClassAnyDecimalDigit", "CharacterClassAnyDecimalDigitInverted", 
			"CharacterClassAnyBlank", "CharacterClassAnyBlankInverted", "ZeroOrMoreQuantifier", 
			"OneOrMoreQuantifier", "ZeroOrOneQuantifier", "AnchorStartOfString", 
			"AnchorWordBoundary", "AnchorNonWordBoundary", "AnchorEndOfString", "EscapedChar", 
			"Digit", "Char"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public regexLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "regex.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u001c\u0080\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0002\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a"+
		"\u0002\u001b\u0007\u001b\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\b\u0001\b\u0001\t\u0001\t\u0001\n\u0001\n\u0001\u000b\u0001\u000b"+
		"\u0001\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012"+
		"\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0015\u0001\u0015"+
		"\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019"+
		"\u0001\u0019\u0001\u0019\u0001\u0019\u0003\u0019{\b\u0019\u0001\u001a"+
		"\u0001\u001a\u0001\u001b\u0001\u001b\u0000\u0000\u001c\u0001\u0001\u0003"+
		"\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011"+
		"\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f\u001f\u0010"+
		"!\u0011#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017/\u00181\u00193\u001a"+
		"5\u001b7\u001c\u0001\u0000\u0002\u0001\u000009\u0003\u000009AFaf\u0080"+
		"\u0000\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000"+
		"\u0000\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000"+
		"\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000"+
		"\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011"+
		"\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015"+
		"\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019"+
		"\u0001\u0000\u0000\u0000\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d"+
		"\u0001\u0000\u0000\u0000\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001"+
		"\u0000\u0000\u0000\u0000#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000"+
		"\u0000\u0000\'\u0001\u0000\u0000\u0000\u0000)\u0001\u0000\u0000\u0000"+
		"\u0000+\u0001\u0000\u0000\u0000\u0000-\u0001\u0000\u0000\u0000\u0000/"+
		"\u0001\u0000\u0000\u0000\u00001\u0001\u0000\u0000\u0000\u00003\u0001\u0000"+
		"\u0000\u0000\u00005\u0001\u0000\u0000\u0000\u00007\u0001\u0000\u0000\u0000"+
		"\u00019\u0001\u0000\u0000\u0000\u0003;\u0001\u0000\u0000\u0000\u0005="+
		"\u0001\u0000\u0000\u0000\u0007?\u0001\u0000\u0000\u0000\tA\u0001\u0000"+
		"\u0000\u0000\u000bC\u0001\u0000\u0000\u0000\rE\u0001\u0000\u0000\u0000"+
		"\u000fG\u0001\u0000\u0000\u0000\u0011I\u0001\u0000\u0000\u0000\u0013K"+
		"\u0001\u0000\u0000\u0000\u0015M\u0001\u0000\u0000\u0000\u0017O\u0001\u0000"+
		"\u0000\u0000\u0019Q\u0001\u0000\u0000\u0000\u001bT\u0001\u0000\u0000\u0000"+
		"\u001dW\u0001\u0000\u0000\u0000\u001fZ\u0001\u0000\u0000\u0000!]\u0001"+
		"\u0000\u0000\u0000#`\u0001\u0000\u0000\u0000%c\u0001\u0000\u0000\u0000"+
		"\'e\u0001\u0000\u0000\u0000)g\u0001\u0000\u0000\u0000+i\u0001\u0000\u0000"+
		"\u0000-k\u0001\u0000\u0000\u0000/n\u0001\u0000\u0000\u00001q\u0001\u0000"+
		"\u0000\u00003z\u0001\u0000\u0000\u00005|\u0001\u0000\u0000\u00007~\u0001"+
		"\u0000\u0000\u00009:\u0005|\u0000\u0000:\u0002\u0001\u0000\u0000\u0000"+
		";<\u0005(\u0000\u0000<\u0004\u0001\u0000\u0000\u0000=>\u0005)\u0000\u0000"+
		">\u0006\u0001\u0000\u0000\u0000?@\u0005:\u0000\u0000@\b\u0001\u0000\u0000"+
		"\u0000AB\u0005[\u0000\u0000B\n\u0001\u0000\u0000\u0000CD\u0005]\u0000"+
		"\u0000D\f\u0001\u0000\u0000\u0000EF\u0005-\u0000\u0000F\u000e\u0001\u0000"+
		"\u0000\u0000GH\u0005,\u0000\u0000H\u0010\u0001\u0000\u0000\u0000IJ\u0005"+
		"{\u0000\u0000J\u0012\u0001\u0000\u0000\u0000KL\u0005}\u0000\u0000L\u0014"+
		"\u0001\u0000\u0000\u0000MN\u0005\\\u0000\u0000N\u0016\u0001\u0000\u0000"+
		"\u0000OP\u0005.\u0000\u0000P\u0018\u0001\u0000\u0000\u0000QR\u0005\\\u0000"+
		"\u0000RS\u0005w\u0000\u0000S\u001a\u0001\u0000\u0000\u0000TU\u0005\\\u0000"+
		"\u0000UV\u0005W\u0000\u0000V\u001c\u0001\u0000\u0000\u0000WX\u0005\\\u0000"+
		"\u0000XY\u0005d\u0000\u0000Y\u001e\u0001\u0000\u0000\u0000Z[\u0005\\\u0000"+
		"\u0000[\\\u0005D\u0000\u0000\\ \u0001\u0000\u0000\u0000]^\u0005\\\u0000"+
		"\u0000^_\u0005s\u0000\u0000_\"\u0001\u0000\u0000\u0000`a\u0005\\\u0000"+
		"\u0000ab\u0005S\u0000\u0000b$\u0001\u0000\u0000\u0000cd\u0005*\u0000\u0000"+
		"d&\u0001\u0000\u0000\u0000ef\u0005+\u0000\u0000f(\u0001\u0000\u0000\u0000"+
		"gh\u0005?\u0000\u0000h*\u0001\u0000\u0000\u0000ij\u0005^\u0000\u0000j"+
		",\u0001\u0000\u0000\u0000kl\u0005\\\u0000\u0000lm\u0005b\u0000\u0000m"+
		".\u0001\u0000\u0000\u0000no\u0005\\\u0000\u0000op\u0005B\u0000\u0000p"+
		"0\u0001\u0000\u0000\u0000qr\u0005$\u0000\u0000r2\u0001\u0000\u0000\u0000"+
		"st\u0005\\\u0000\u0000t{\b\u0000\u0000\u0000uv\u0005\\\u0000\u0000vw\u0005"+
		"x\u0000\u0000wx\u0001\u0000\u0000\u0000xy\u0007\u0001\u0000\u0000y{\u0007"+
		"\u0001\u0000\u0000zs\u0001\u0000\u0000\u0000zu\u0001\u0000\u0000\u0000"+
		"{4\u0001\u0000\u0000\u0000|}\u0007\u0000\u0000\u0000}6\u0001\u0000\u0000"+
		"\u0000~\u007f\t\u0000\u0000\u0000\u007f8\u0001\u0000\u0000\u0000\u0002"+
		"\u0000z\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}