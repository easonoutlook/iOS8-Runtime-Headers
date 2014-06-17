/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmarksXPCConnection, <WebBookmarksClientDelegateProtocol>;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate> {
    WebBookmarksXPCConnection *_connection;
    <WebBookmarksClientDelegateProtocol> *_delegate;
}

@property <WebBookmarksClientDelegateProtocol> * delegate;


- (void)_clearConnection;
- (void)didStopFetchingReadingListItemWithMessage:(id)arg1;
- (void)didStartFetchingReadingListItemWithMessage:(id)arg1;
- (void)didUpdateProgressWithMessage:(id)arg1;
- (void)didFinishFetching;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)startReadingListFetcher;
- (void)clearAllReadingListArchives;
- (void)clearReadingListArchiveWithUUID:(id)arg1;
- (id)delegate;
- (void)invalidate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
