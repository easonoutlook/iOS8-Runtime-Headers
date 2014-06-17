/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator  {
    unsigned int _flags;
    NSSubstringPredicateOperator *_stringVersion;
}

+ (BOOL)supportsSecureCoding;

- (unsigned int)flags;
- (id)symbol;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)options;
- (void)dealloc;
- (id)stringVersion;
- (void)_setOptions:(unsigned int)arg1;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)minimalFormInContext:(id)arg1 ofPredicate:(id)arg2;

@end