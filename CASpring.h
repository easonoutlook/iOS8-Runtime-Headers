/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CAValueFunction, NSString, CALayer;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    NSString *_name;
    CALayer *_layerA;
    CALayer *_layerB;
    struct CGPoint { 
        float x; 
        float y; 
    } _attachmentPointA;
    struct CGPoint { 
        float x; 
        float y; 
    } _attachmentPointB;
    CAValueFunction *_function;
    float _stiffness;
    float _damping;
    float _restLength;
    BOOL _enabled;
    id _delegate;
    void *_priv;
}

@property(copy) NSString * name;
@property(getter=isEnabled) BOOL enabled;
@property(retain) CALayer * layerA;
@property(retain) CALayer * layerB;
@property struct CGPoint { float x1; float x2; } attachmentPointA;
@property struct CGPoint { float x1; float x2; } attachmentPointB;
@property(retain) CAValueFunction * function;
@property float restLength;
@property float stiffness;
@property float damping;
@property id delegate;

+ (id)spring;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)setAttachmentPointB:(struct CGPoint { float x1; float x2; })arg1;
- (id)layerB;
- (void)setLayerB:(id)arg1;
- (void)setAttachmentPointA:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLayerA:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id).cxx_construct;
- (float)damping;
- (BOOL)isEnabled;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDamping:(float)arg1;
- (void)setStiffness:(float)arg1;
- (id)delegate;
- (void)setRestLength:(float)arg1;
- (float)restLength;
- (struct CGPoint { float x1; float x2; })attachmentPointB;
- (struct CGPoint { float x1; float x2; })attachmentPointA;
- (id)layerA;
- (void)setFunction:(id)arg1;
- (float)stiffness;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)function;

@end
