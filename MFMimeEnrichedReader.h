/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableString;

@interface MFMimeEnrichedReader : NSObject  {
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directUniCharBuffer; 
        char *directCStringBuffer; 
        struct { 
            int location; 
            int length; 
        } rangeToBuffer; 
        int bufferedRangeStart; 
        int bufferedRangeEnd; 
    } _inputBuffer;
    long _currentIndex;
    long _inputLength;
    unsigned int _noFillLevel : 30;
    unsigned int _eatOneNewline : 1;
    unsigned int _insideComment : 1;
    unsigned int _wantsPlainText : 1;
    int _lastQuoteLevel;
    struct __CFArray { } *_commandStack;
    id _outputString;
    NSMutableString *_outputBuffer;
    struct __CFString { } *_prependHTML;
    struct __CFString { } *_postpendHTML;
    float _indentWidth;
}

+ (struct __CFCharacterSet { }*)punctuationSet;
+ (struct __CFCharacterSet { }*)parenSet;

- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;
- (void)setWantsHTML:(BOOL)arg1;
- (void)closeUpQuoting;
- (void)appendStringToBuffer:(id)arg1;
- (void)endCommand:(id)arg1;
- (void)beginCommand:(id)arg1;
- (int)readTokenInto:(id*)arg1;
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;
- (void)appendNewLine:(id)arg1;
- (void)mismatchError:(id)arg1;
- (void)setupFontStackEntry:(struct _CommandStackEntry { struct { /* ? */ } *x1; id x2; }*)arg1;
- (void)handleNoParameterCommand:(const struct { id x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 2; }*)arg1;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)parseParameterString:(id)arg1;
- (id)currentFont;
- (id)description;
- (void)dealloc;

@end
