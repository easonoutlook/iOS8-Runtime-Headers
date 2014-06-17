/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSMutableDictionary, NSString;

@interface GKGridLayoutMetrics : NSObject <NSCopying> {
    NSMutableDictionary *_keyToMetrics;
    NSMutableDictionary *_locationToKeyList;
    NSString *_layoutKey;
}

@property(retain) NSMutableDictionary * keyToMetrics;
@property(retain) NSMutableDictionary * locationToKeyList;
@property(retain) NSString * layoutKey;

+ (id)metrics;

- (void)removeSupplementaryMetricsForKey:(id)arg1;
- (id)listForLocation:(unsigned int)arg1;
- (id)keyListForLocation:(unsigned int)arg1;
- (id)_gkDescription;
- (void)addSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned int)arg3;
- (void)insertSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned int)arg3;
- (void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)arg1 atLocation:(unsigned int)arg2 globalRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)enumerateSupplementaryMetricsUsingBlock:(id)arg1;
- (void)setLayoutKey:(id)arg1;
- (int)prepareLayout:(id)arg1 startingAtSection:(int)arg2;
- (void)enumerateSupplementaryLocations:(id)arg1;
- (id)layoutKey;
- (void)setLocationToKeyList:(id)arg1;
- (id)locationToKeyList;
- (void)setKeyToMetrics:(id)arg1;
- (id)keyToMetrics;
- (id)localDescription;
- (void)replaceSupplementaryMetrics:(id)arg1 forKey:(id)arg2;
- (id)supplementaryMetricsForKey:(id)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
