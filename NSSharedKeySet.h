/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSSharedKeySet;

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding> {
    char *_g;
    unsigned char _select;
    void *_rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int *_seeds;
    id *_keys;
    NSSharedKeySet *_subSharedKeySet;
}

@property char * g;
@property unsigned char select;
@property void* rankTable;
@property double c;
@property unsigned int M;
@property unsigned int factor;
@property unsigned int numKey;
@property unsigned int* seeds;
@property id* keys;
@property(retain) NSSharedKeySet * subSharedKeySet;

+ (id)keySetWithKeys:(id)arg1;

- (void)setC:(double)arg1;
- (double)c;
- (unsigned char)select;
- (unsigned int)indexForKey:(id)arg1;
- (id)keyAtIndex:(unsigned int)arg1;
- (id*)keys;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)allKeys;
- (char *)g;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)generateSubclassCode:(id)arg1 printChainOfKeySetIfPossible:(BOOL)arg2 printSpecialCode:(unsigned int)arg3;
- (id)initWithKeys:(id*)arg1 count:(unsigned int)arg2;
- (void)setKeys:(id*)arg1;
- (void)setSubSharedKeySet:(id)arg1;
- (id)subSharedKeySet;
- (void)setSeeds:(unsigned int*)arg1;
- (unsigned int*)seeds;
- (void)setNumKey:(unsigned int)arg1;
- (unsigned int)numKey;
- (void)setFactor:(unsigned int)arg1;
- (unsigned int)factor;
- (void)setM:(unsigned int)arg1;
- (unsigned int)M;
- (void)setRankTable:(void*)arg1;
- (void*)rankTable;
- (void)setSelect:(unsigned char)arg1;
- (void)setG:(char *)arg1;
- (unsigned int)maximumIndex;
- (unsigned int)keySetCount;

@end
