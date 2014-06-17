/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSXPCInterface, NSXPCConnection, NSObject<OS_xpc_object>;

@interface NSXPCDecoder : NSXPCCoder  {
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCInterface *_interface;
    SEL _replyToSelector;
    unsigned long long _genericIndex;
    void **_decoder;
    NSXPCConnection *_connection;
    struct { /* ? */ } *_collections[128];
    struct { 
        unsigned int offset; 
        int type; 
    } _rootObject;
    unsigned int _collectionPointer;
    id _allowedClassesList[128];
    int _allowedClassesIndex;
}

@property(retain) NSXPCInterface * interface;
@property SEL replyToSelector;
@property NSXPCConnection * _connection;

+ (id)_createXPCObjectWithData:(id)arg1;

- (void)setInterface:(id)arg1;
- (id)interface;
- (id)_connection;
- (id)decodeObject;
- (int)decodeInt32ForKey:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (float)decodeFloatForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int*)arg2;
- (int)decodeIntegerForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (int)decodeIntForKey:(id)arg1;
- (id)debugDescription;
- (BOOL)containsValueForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (SEL)replyToSelector;
- (id)decodeInvocation;
- (const char *)_decodeCStringForKey:(id)arg1;
- (void)set_connection:(id)arg1;
- (void)setReplyToSelector:(SEL)arg1;
- (id)_initWithRootXPCObject:(id)arg1;
- (void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)allowedClasses;

@end
