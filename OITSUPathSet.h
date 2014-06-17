/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUPathSet, NSMutableDictionary, NSMutableSet;

@interface OITSUPathSet : NSObject <NSCopying> {
    NSMutableSet *mPaths;
    NSMutableDictionary *mBasePathToNumberMap;
    OITSUPathSet *mUnderlyingSet;
}

+ (id)parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL*)arg2 number:(unsigned int*)arg3;
+ (void)processPath:(id)arg1 base:(id*)arg2 hasBaseNumber:(BOOL*)arg3 baseNumber:(unsigned int*)arg4 extension:(id*)arg5;

- (void)unionPathSet:(id)arg1;
- (void)pathIsNoLongerUsed:(id)arg1;
- (void)pathIsUsed:(id)arg1;
- (BOOL)isPathUsed:(id)arg1;
- (void)setUnderlyingPathSet:(id)arg1;
- (id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2;
- (id)addPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;

@end
