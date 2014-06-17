/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DScene, NSMutableArray, TSCH3DSceneObject, NSObject<TSCH3DScenePropertyAccessorFactory>, TSCH3DScenePropertyAccessor, <TSCH3DSceneDelegate>, TSCH3DCamera, TSUNoCopyDictionary, NSMutableDictionary;

@interface TSCH3DScene : NSObject  {
    TSCH3DScene *mOriginal;
    NSObject<TSCH3DScenePropertyAccessorFactory> *mAccessorFactory;
    TSCH3DScenePropertyAccessor *mAccessor;
    NSMutableDictionary *mEnumeratorMap;
    NSMutableDictionary *mPropertiesMap;
    TSUNoCopyDictionary *mDelegateMap;
    TSCH3DSceneObject *mMain;
    NSMutableArray *mObjects;
    TSCH3DCamera *mCamera;
}

@property(retain) TSCH3DScene * original;
@property(retain) NSObject<TSCH3DScenePropertyAccessorFactory> * accessorFactory;
@property(retain) TSCH3DScenePropertyAccessor * accessor;
@property(retain) TSCH3DSceneObject * main;
@property(retain) TSCH3DCamera * camera;
@property(readonly) <TSCH3DSceneDelegate> * delegate;

+ (id)scene;

- (void)setCamera:(id)arg1;
- (id)camera;
- (id)delegateMap;
- (id)main;
- (void)removeObjectsOfClass:(Class)arg1;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })transform;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)delegate;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (id)clone;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (void)addObject:(id)arg1;
- (id)init;
- (id)objects;
- (id)renderCache;
- (id)extractObjectsNotOfClasses:(id)arg1;
- (id)extractObjectsNotOfClass:(Class)arg1;
- (id)extractObjectsOfClasses:(id)arg1;
- (id)extractObjectsOfClass:(Class)arg1;
- (void)removeObjectsNotOfClass:(Class)arg1;
- (id)returnRemoved:(BOOL)arg1 removeObjectsPassingTest:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)makeAllObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)enumerateAllObjectsUsingBlock:(id)arg1;
- (void)setPart:(struct TSCH3DScenePart { id x1; id x2; })arg1 forType:(id)arg2;
- (void)resetProperties;
- (void)copyPropertiesFromScene:(id)arg1;
- (void)setAccessor:(id)arg1;
- (void)setAccessorFactory:(id)arg1;
- (void)resetEnumerator;
- (id)extractObjects:(BOOL)arg1 ofClasses:(id)arg2;
- (id)removeObjects:(BOOL)arg1 ofClasses:(id)arg2 into:(id)arg3;
- (id)removeObjects:(BOOL)arg1 ofClasses:(id)arg2 addTo:(id)arg3;
- (id)reallocateObjects;
- (void)setDelegate:(id)arg1 forSceneObject:(id)arg2;
- (void)setDelegate:(id)arg1 forObject:(id)arg2;
- (id)delegateForObject:(id)arg1;
- (void)setEnumerator:(id)arg1 properties:(id)arg2 forType:(id)arg3;
- (void)setEnumerator:(id)arg1 forType:(id)arg2;
- (void)overrideObjects;
- (id)accessorFactory;
- (id)propertiesMap;
- (id)enumeratorMap;
- (void)resetDelegates;
- (struct TSCH3DScenePart { id x1; id x2; })partForType:(id)arg1;
- (id)enumeratorForType:(id)arg1;
- (id)mutablePropertiesForType:(id)arg1;
- (id)delegateForSceneObject:(id)arg1;
- (id)accessor;
- (void)setMain:(id)arg1;
- (void)resetObjects;
- (void)makeDelegatesFromDelegator:(id)arg1;
- (id)propertiesForType:(id)arg1;
- (void)setProperties:(id)arg1 forType:(id)arg2;
- (struct ChartScenePropertyAccessor { id x1; id x2; })chartProperties;
- (id)original;
- (void)setOriginal:(id)arg1;

@end