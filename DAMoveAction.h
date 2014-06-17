/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMoveAction : DAAction  {
    NSString *_sourceContainerId;
    NSString *_sourceServerId;
    NSString *_destinationContainerId;
}

@property(retain) NSString * sourceContainerId;
@property(retain) NSString * sourceServerId;
@property(retain) NSString * destinationContainerId;


- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;
- (id)destinationContainerId;
- (id)sourceServerId;
- (id)sourceContainerId;
- (void)setDestinationContainerId:(id)arg1;
- (void)setSourceServerId:(id)arg1;
- (void)setSourceContainerId:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
