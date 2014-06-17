/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADStyleMatrixReference : NSObject <NSCopying> {
    unsigned long mMatrixIndex;
    OADColor *mColor;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)arg1 color:(id)arg2;

- (void)applyToEffectsInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToFillInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToStrokeInProperties:(id)arg1 styleMatrix:(id)arg2;
- (id)initWithMatrixIndex:(unsigned long)arg1 color:(id)arg2;
- (unsigned long)matrixIndex;
- (void)setMatrixIndex:(unsigned long)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end