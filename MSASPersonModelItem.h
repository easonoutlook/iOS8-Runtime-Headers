/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSASAlbum, NSString, <NSObject>;

@interface MSASPersonModelItem : NSObject <NSCopying> {
    int _errorCount;
    MSASAlbum *_album;
    NSString *_albumGUID;
    <NSObject> *_object;
}

@property int errorCount;
@property(retain) MSASAlbum * album;
@property(retain) NSString * albumGUID;
@property(retain) <NSObject> * object;


- (void)setAlbumGUID:(id)arg1;
- (id)albumGUID;
- (void)setAlbum:(id)arg1;
- (id)album;
- (void)setErrorCount:(int)arg1;
- (int)errorCount;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (id)object;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;

@end