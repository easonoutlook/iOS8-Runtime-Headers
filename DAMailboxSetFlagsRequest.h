/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxSetFlagsRequest : DAMailboxRequest  {
    unsigned long long _onFlags;
    unsigned long long _offFlags;
}

@property unsigned long long onFlags;
@property unsigned long long offFlags;


- (unsigned long long)offFlags;
- (unsigned long long)onFlags;
- (id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3;
- (void)setOffFlags:(unsigned long long)arg1;
- (void)setOnFlags:(unsigned long long)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
