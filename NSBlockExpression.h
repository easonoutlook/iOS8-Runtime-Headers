/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface NSBlockExpression : NSExpression  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSArray *_arguments;
}


- (id)arguments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)expressionBlock;
- (id)initWithType:(unsigned int)arg1 block:(id)arg2 arguments:(id)arg3;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)predicateFormat;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;

@end
