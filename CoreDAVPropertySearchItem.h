/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem  {
    CoreDAVLeafItem *_prop;
    NSString *_match;
    NSString *_matchTypeAttribute;
}

@property(retain) CoreDAVLeafItem * prop;
@property(retain) NSString * match;
@property(retain) NSString * matchTypeAttribute;


- (void)write:(id)arg1;
- (id)match;
- (void)setMatch:(id)arg1;
- (void)setMatchTypeAttribute:(id)arg1;
- (id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2;
- (id)matchTypeAttribute;
- (void)setProp:(id)arg1;
- (id)prop;
- (id)description;
- (void)dealloc;
- (id)init;
- (int)wellKnownPrincipalSearchType;

@end
