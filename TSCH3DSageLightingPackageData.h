/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSDictionary;

@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData> {
    NSDictionary *mPackage;
    NSArray *mLights;
}

+ (id)dataWithDictionary:(id)arg1;

- (id)nameAtIndex:(unsigned int)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (struct Color { float x1; float x2; float x3; float x4; })colorAtIndex:(unsigned int)arg1 redKey:(id)arg2 greenKey:(id)arg3 blueKey:(id)arg4;
- (BOOL)enabledAtIndex:(unsigned int)arg1;
- (int)coordinateSpaceAtIndex:(unsigned int)arg1;
- (struct Vector3 { float x1; float x2; float x3; })attenuationAtIndex:(unsigned int)arg1;
- (float)intensityAtIndex:(unsigned int)arg1;
- (struct Color { float x1; float x2; float x3; float x4; })specularColorAtIndex:(unsigned int)arg1;
- (struct Color { float x1; float x2; float x3; float x4; })diffuseColorAtIndex:(unsigned int)arg1;
- (struct Color { float x1; float x2; float x3; float x4; })ambientColorAtIndex:(unsigned int)arg1;
- (float)dropOffRateAtIndex:(unsigned int)arg1;
- (float)cutOffAngleAtIndex:(unsigned int)arg1;
- (struct Vector3 { float x1; float x2; float x3; })directionAtIndex:(unsigned int)arg1;
- (struct Vector3 { float x1; float x2; float x3; })positionAtIndex:(unsigned int)arg1;
- (int)typeAtIndex:(unsigned int)arg1;
- (id)packageName;

@end
