/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, NSMutableArray, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem  {
    NSMutableArray *_orderedResponses;
    CoreDAVLeafItem *_responseDescription;
}

@property(readonly) NSSet * responses;
@property(retain) NSMutableArray * orderedResponses;
@property(retain) CoreDAVLeafItem * responseDescription;

+ (id)copyParseRules;

- (void)addResponse:(id)arg1;
- (id)responses;
- (void)setOrderedResponses:(id)arg1;
- (void)setResponseDescription:(id)arg1;
- (id)responseDescription;
- (id)orderedResponses;
- (id)description;
- (void)dealloc;
- (id)init;

@end
