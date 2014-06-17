/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSCondition, NSArray;

@interface TSUFastReadInvalidatingCache : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id mGenerator;

    id mValue;
    long long mReaderCount;
    NSArray *mToDispose;
    BOOL mReentrant;
    NSCondition *mCondition;
    BOOL mIsGenerating;
}


- (id)initForReentrant:(BOOL)arg1 withGenerator:(id)arg2;
- (void)p_setValue:(id)arg1;
- (id)value;
- (void)invalidate;
- (void)dealloc;

@end
