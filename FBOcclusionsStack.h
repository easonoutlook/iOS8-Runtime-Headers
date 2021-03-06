/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSCountedSet;

@interface FBOcclusionsStack : NSObject  {
    NSCountedSet *_levels;
    NSMutableDictionary *_levelToCompositeOcclusions;
    NSMutableDictionary *_keyToEntry;
    NSMutableArray *_orderedEntries;
    NSMutableSet *_dirtyKeys;
}


- (void)removeKey:(id)arg1;
- (id)occlusionsAppliedToKey:(id)arg1;
- (id)dirtyKeys;
- (void)enumerateKeysByLevelWithBlock:(id)arg1;
- (void)setKey:(id)arg1 toLevel:(float)arg2 withOcclusions:(id)arg3;
- (void)_adjustEntry:(id)arg1 forLevel:(float)arg2 occlusions:(id)arg3;
- (BOOL)isEmpty;
- (BOOL)isDirty;
- (void)dealloc;
- (id)init;

@end
