/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString;

@interface CKObjCType : NSObject  {
    int _code;
    NSString *_encoding;
    NSString *_name;
    NSString *_className;
    unsigned int _size;
    unsigned int _flags;
}

@property(readonly) int code;
@property(readonly) NSString * encoding;
@property(readonly) NSString * name;
@property(readonly) NSString * className;
@property(readonly) unsigned int size;
@property(readonly) unsigned int flags;
@property(getter=isNumber,readonly) BOOL number;
@property(getter=isIntegerNumber,readonly) BOOL integerNumber;
@property(getter=isFloatingPointNumber,readonly) BOOL floatingPointNumber;
@property(getter=isObject,readonly) BOOL object;

+ (id)typeForValue:(id)arg1;
+ (id)typeForEncoding:(const char *)arg1;

- (id)encoding;
- (unsigned int)flags;
- (void).cxx_destruct;
- (id)className;
- (unsigned int)size;
- (int)code;
- (id)name;
- (BOOL)isObject;
- (BOOL)isNumber;
- (id)initWithCode:(int)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned int)arg5 flags:(unsigned int)arg6;
- (BOOL)isFloatingPointNumber;
- (BOOL)isIntegerNumber;
- (void)getBytes:(void*)arg1 forObject:(id)arg2;
- (id)objectWithBytes:(const void*)arg1;

@end
