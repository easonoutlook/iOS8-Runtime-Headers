/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSNumber, NSURL, NSArray;

@interface BRQueryStitch : NSObject  {
    NSArray *_queries;
    NSNumber *_objid;
    BOOL _kind;
    NSURL *_fromURL;
    NSURL *_url;
}

@property(retain) NSURL * fromURL;
@property(retain) NSArray * queries;


- (void)setQueries:(id)arg1;
- (id)queries;
- (void)setFromURL:(id)arg1;
- (id)fromURL;
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;
- (void)_deletionDone;
- (void)_renameDone;
- (void)_creationDone;
- (void)done;
- (id)description;
- (void)dealloc;

@end
