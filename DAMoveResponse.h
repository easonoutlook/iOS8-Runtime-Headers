/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DAMessageMoveRequest, NSString;

@interface DAMoveResponse : NSObject  {
    int _status;
    NSString *_sourceID;
    NSString *_destID;
    DAMessageMoveRequest *_origRequest;
}

@property int status;
@property(copy) NSString * sourceID;
@property(copy) NSString * destID;
@property(retain) DAMessageMoveRequest * origRequest;


- (id)destID;
- (void)setOrigRequest:(id)arg1;
- (id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3;
- (id)origRequest;
- (void)setDestID:(id)arg1;
- (void)setSourceID:(id)arg1;
- (id)sourceID;
- (void)setStatus:(int)arg1;
- (int)status;
- (void).cxx_destruct;
- (id)description;

@end
