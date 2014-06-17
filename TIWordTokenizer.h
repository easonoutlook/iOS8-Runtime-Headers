/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIWordTokenizer : NSObject  {
    NSString *m_string;
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
    } m_inlineBuffer;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } m_tokenRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } m_searchRange;
    unsigned int m_bufferOffset;
}


- (struct _NSRange { unsigned int x1; unsigned int x2; })advanceToNextToken;
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)allTokensForString:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfCurrentToken;
- (void)dealloc;
- (id)init;

@end
