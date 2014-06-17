/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSArray;

@interface MFSMTPResponse : NSObject <NSCopying> {
    id _lastResponseLine;
    int _status;
    unsigned int _statusClass : 10;
    unsigned int _statusSubject : 10;
    unsigned int _statusDetail : 10;
    NSString *_statusString;
    NSArray *_continuationResponses;
}

@property(readonly) int status;
@property(readonly) unsigned int statusClass;
@property(readonly) unsigned int statusSubject;
@property(readonly) unsigned int statusDetail;
@property(readonly) NSString * statusString;
@property(retain) NSArray * continuationResponses;


- (id)continuationResponses;
- (id)statusString;
- (unsigned int)statusDetail;
- (unsigned int)statusSubject;
- (unsigned int)statusClass;
- (int)failureReason;
- (void)_updateEnhancedStatusCodesFromLastResponse;
- (void)setContinuationResponses:(id)arg1;
- (void)setLastResponseLine:(id)arg1;
- (id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2;
- (id)lastResponseLine;
- (id)initWithStatus:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dealloc;

@end