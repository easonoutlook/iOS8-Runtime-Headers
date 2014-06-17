/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSArray;

@interface UIKBTree_Compile : UIKBTree  {
    NSMutableDictionary *symbols;
    NSMutableDictionary *refs;
}

@property(retain) NSMutableDictionary * symbols;
@property(retain) NSMutableDictionary * refs;
@property(readonly) NSArray * refList;
@property BOOL variable;

+ (int)typeForString:(id)arg1;
+ (id)stringEnumForType:(int)arg1;
+ (id)uniqueNameWithType:(int)arg1;
+ (id)treeOfType:(int)arg1;

- (id)refList;
- (void)setAttributeSet:(id)arg1;
- (void)setGeometrySet:(id)arg1;
- (int)subtreeHash;
- (void)mergePropertiesWithSubtreeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 properties:(id)arg2;
- (void)mergeSymbolsWithOthers:(id)arg1;
- (void)mergeSubtreesWithOthers:(id)arg1;
- (int)indexOfSubtreeWithName:(id)arg1 rows:(id)arg2;
- (int)indexOfSubtreeWithType:(int)arg1;
- (void)setTarget:(id)arg1 forReference:(id)arg2;
- (id)listAtIndex:(int)arg1;
- (void)uniquifyName;
- (id)simpleName;
- (int)shapeHash;
- (int)symbolHash:(id)arg1;
- (id)symbolValues:(id)arg1 withSymbols:(id)arg2;
- (BOOL)usesSymbols;
- (void)mergePropertiesWithOthers:(id)arg1;
- (void)setVariable:(BOOL)arg1;
- (BOOL)variable;
- (id)refs;
- (id)symbols;
- (void)setRefs:(id)arg1;
- (void)setSymbols:(id)arg1;
- (id)attributeSet:(BOOL)arg1;
- (id)geometrySet:(BOOL)arg1;
- (BOOL)_needsScaling;
- (BOOL)isSameAsTree:(id)arg1;
- (id)initWithType:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end