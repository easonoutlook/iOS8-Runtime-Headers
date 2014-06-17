/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary, NSMutableArray;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {
    NSMutableDictionary *_artworkByURL;
    NSMutableArray *_artworkLoadOperations;
}

+ (id)copyDefaultContext;

- (id)artworkImageForURL:(id)arg1;
- (id)artworkImageForItemImage:(id)arg1;
- (void)reloadAfterArtworkLoad;
- (id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2;
- (id)copyImageDataProvider;
- (void)cancelArtworkRequests;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (void)operation:(id)arg1 failedWithError:(id)arg2;

@end
