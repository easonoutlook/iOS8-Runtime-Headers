/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface CATextLayer : CALayer  {
    struct CATextLayerPrivate { } *_state;
}

@property(copy) id truncationString;
@property BOOL allowsFontSubpixelQuantization;
@property(copy) id string;
@property void* font;
@property float fontSize;
@property struct CGColor { }* foregroundColor;
@property(getter=isWrapped) BOOL wrapped;
@property(copy) NSString * truncationMode;
@property(copy) NSString * alignmentMode;

+ (BOOL)needsDisplayForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (float)fontSize;
- (void)setAlignmentMode:(id)arg1;
- (void)setForegroundColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)foregroundColor;
- (void)setString:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void*)font;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)setFont:(void*)arg1;
- (id)string;
- (void)didChangeValueForKey:(id)arg1;
- (id)alignmentMode;
- (void)setTruncationMode:(id)arg1;
- (id)truncationMode;
- (void)setWrapped:(BOOL)arg1;
- (BOOL)isWrapped;
- (void)setAllowsFontSubpixelQuantization:(BOOL)arg1;
- (void)setTruncationString:(id)arg1;
- (BOOL)wrapped;
- (void)_applyLinesToFunction:(int (*)())arg1 info:(void*)arg2;
- (struct __CTLine { }*)_createTruncationToken;
- (struct __CTTypesetter { }*)_retainTypesetter;
- (id)truncationString;
- (id)_createStringDict;
- (void)_drawLine:(struct __CTLine { }*)arg1 inContext:(struct CGContext { }*)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3;
- (BOOL)allowsFontSubpixelQuantization;
- (struct CGSize { float x1; float x2; })_preferredSize;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (void)dealloc;
- (id)init;

@end
