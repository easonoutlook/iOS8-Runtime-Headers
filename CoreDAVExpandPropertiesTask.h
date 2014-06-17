/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask  {
    NSMutableSet *_propertiesToExpand;
}

@property(retain) NSMutableSet * propertiesToExpand;


- (id)requestBody;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 expandedName:(id)arg3 expandedNameSpace:(id)arg4;
- (id)propertiesToExpand;
- (void)addPropertyToExpandWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3;
- (void)setPropertiesToExpand:(id)arg1;
- (id)parseHints;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)description;
- (void)dealloc;

@end