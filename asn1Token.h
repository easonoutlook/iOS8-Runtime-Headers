/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1Token : NSObject  {
    unsigned char mClass;
    unsigned int mIdentifier;
    unsigned int mLength;
    const char *mContent;
}

@property(readonly) unsigned char tokenClass;
@property(readonly) unsigned int identifier;
@property(readonly) unsigned int length;
@property(readonly) const char * content;

+ (id)readOpaqueTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1 opaque:(BOOL)arg2;

- (unsigned char)tokenClass;
- (id)_initWithID:(unsigned int)arg1 class:(unsigned char)arg2 length:(unsigned int)arg3 content:(const char *)arg4 opaque:(BOOL)arg5;
- (const char *)content;
- (unsigned int)identifier;
- (unsigned int)length;
- (id)description;

@end
