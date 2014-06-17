/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSArray;

@interface MFLibraryContentIndexableItem : NSObject  {
    unsigned int _documentIdentifier;
    NSString *_content;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_senders;
    NSString *_subject;
    unsigned int _mailboxID;
}

@property unsigned int documentIdentifier;
@property(copy) NSString * content;
@property(copy) NSArray * to;
@property(copy) NSArray * cc;
@property(copy) NSArray * senders;
@property(copy) NSString * subject;
@property unsigned int mailboxID;


- (void)setTo:(id)arg1;
- (id)to;
- (void)setDocumentIdentifier:(unsigned int)arg1;
- (unsigned int)documentIdentifier;
- (void)setSenders:(id)arg1;
- (void)setCc:(id)arg1;
- (id)initWithDocumentIdentifier:(unsigned int)arg1;
- (id)cc;
- (void)setMailboxID:(unsigned int)arg1;
- (unsigned int)mailboxID;
- (id)senders;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)content;
- (int)compare:(id)arg1;
- (void)setContent:(id)arg1;
- (void)dealloc;

@end
