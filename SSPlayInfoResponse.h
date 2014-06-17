/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSError, NSData;

@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying> {
    NSError *_error;
    NSData *_playInfoData;
}

@property(readonly) NSError * error;
@property(readonly) NSData * playInfoData;


- (id)initWithPlayInfoData:(id)arg1 error:(id)arg2;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)error;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)playInfoData;
- (id)description;
- (void)dealloc;

@end
