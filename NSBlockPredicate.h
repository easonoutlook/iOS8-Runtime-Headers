/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface NSBlockPredicate : NSPredicate  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

}


- (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_predicateBlock;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)initWithBlock:(id)arg1;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;

@end
