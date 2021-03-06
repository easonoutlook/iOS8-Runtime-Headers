/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset> {
}

@property(readonly) NSString * presetKind;

+ (id)properties;
+ (void)initialize;
+ (void)saveMediaStylePropertyMap:(id)arg1 toArchive:(struct MediaStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StrokeArchive {} *x3; struct ShadowArchive {} *x4; struct ReflectionArchive {} *x5; float x6; int x7; unsigned int x8[1]; }*)arg2 archiver:(id)arg3;
+ (void)loadMediaStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct MediaStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StrokeArchive {} *x3; struct ShadowArchive {} *x4; struct ReflectionArchive {} *x5; float x6; int x7; unsigned int x8[1]; }*)arg2 unarchiver:(id)arg3;
+ (id)movieStylePresetStyleDescriptor;
+ (id)imageStylePresetStyleDescriptor;
+ (id)propertiesAllowingNSNull;
+ (id)p_magicMoveProperties;
+ (BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;

- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (SEL)mapThemePropertyMapSelector;
- (id)presetKind;
- (void)loadFromArchive:(const struct MediaStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleArchive {} *x3; struct MediaStylePropertiesArchive {} *x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct MediaStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleArchive {} *x3; struct MediaStylePropertiesArchive {} *x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
