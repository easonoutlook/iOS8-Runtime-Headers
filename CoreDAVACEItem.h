/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVInvertItem, CoreDAVGrantItem, CoreDAVPrincipalItem, CoreDAVDenyItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem;

@interface CoreDAVACEItem : CoreDAVItem  {
    CoreDAVPrincipalItem *_principal;
    CoreDAVInvertItem *_invert;
    CoreDAVGrantItem *_grant;
    CoreDAVDenyItem *_deny;
    CoreDAVItemWithNoChildren *_protectedItem;
    CoreDAVItemWithHrefChildItem *_inherited;
}

@property(retain) CoreDAVPrincipalItem * principal;
@property(retain) CoreDAVInvertItem * invert;
@property(retain) CoreDAVGrantItem * grant;
@property(retain) CoreDAVDenyItem * deny;
@property(retain) CoreDAVItemWithNoChildren * protectedItem;
@property(retain) CoreDAVItemWithHrefChildItem * inherited;

+ (id)privilegeItemWithNameSpace:(id)arg1 andName:(id)arg2;
+ (id)copyParseRules;

- (void)write:(id)arg1;
- (id)initWithPrincipal:(id)arg1 shouldInvert:(BOOL)arg2 action:(int)arg3 withPrivileges:(id)arg4;
- (void)setInherited:(id)arg1;
- (void)setProtectedItem:(id)arg1;
- (void)setDeny:(id)arg1;
- (void)setGrant:(id)arg1;
- (void)setInvert:(id)arg1;
- (void)setPrincipal:(id)arg1;
- (id)protectedItem;
- (id)inherited;
- (id)grant;
- (id)principal;
- (id)deny;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)invert;

@end
