/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSIndexSet;

@interface ABLEDataHygiene : NSObject  {
    NSIndexSet *_validIndexSet;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _predicate;

    unsigned int _length;
}

@property(retain) NSIndexSet * validIndexSet;
@property(readonly) id predicate;
@property unsigned int length;

+ (id)hygieneNaN;

- (id)checkArray:(id)arg1;
- (id)initWithHygieneTest:(id)arg1;
- (id)validIndexSet;
- (void)setValidIndexSet:(id)arg1;
- (id)predicate;
- (void).cxx_destruct;
- (void)setLength:(unsigned int)arg1;
- (unsigned int)length;

@end
