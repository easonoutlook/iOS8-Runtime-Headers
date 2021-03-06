/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSMutableArray;

@interface NUCArray : NSMutableArray <NUCJSONObject, NSCopying, NSMutableCopying, NSCoding, NSSecureCoding> {
    NSMutableArray *_backingArray;
    NSMutableArray *_mArrayOfNewItems;
}

@property(retain) NSMutableArray * backingArray;
@property(retain) NSMutableArray * mArrayOfNewItems;

+ (id)makeWithJSONObject:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setBackingArray:(id)arg1;
- (id)arrayOfNewItems;
- (void)setMArrayOfNewItems:(id)arg1;
- (id)backingArray;
- (id)mArrayOfNewItems;
- (void)_raiseInvalidArgumentExceptionForValue:(id)arg1;
- (BOOL)_validateObject:(id*)arg1;
- (Class)classOfItems;
- (id)jsonValue;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeLastObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)addObject:(id)arg1;
- (id)init;

@end
