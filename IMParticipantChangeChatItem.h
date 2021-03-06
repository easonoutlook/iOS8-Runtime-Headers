/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMHandle;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem  {
    IMHandle *_sender;
    IMHandle *_otherHandle;
    IMHandle *_handle;
}

@property(readonly) long long changeType;
@property(retain,readonly) IMHandle * sender;
@property(retain,readonly) IMHandle * handle;
@property(retain,readonly) IMHandle * otherHandle;


- (long long)changeType;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
- (id)handle;
- (id)otherHandle;
- (id)sender;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (Class)__ck_chatItemClass;

@end
