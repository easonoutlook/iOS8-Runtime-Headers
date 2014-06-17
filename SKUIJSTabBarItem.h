/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class JSManagedValue, IKJSNavigationDocument, IKJSObject, NSString, SKUITabBarItem;

@interface SKUIJSTabBarItem : IKJSObject <SKUIJSTabBarItem> {
    JSManagedValue *_managedNavigationDocument;
    IKJSNavigationDocument *_navigationDocument;
    IKJSObject *_owner;
    SKUITabBarItem *_tabBarItem;
}

@property(readonly) SKUITabBarItem * tabBarItem;
@property(readonly) NSString * identifier;
@property(readonly) IKJSNavigationDocument * navigationDocument;
@property(readonly) NSString * rootURL;


- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2 tabBarItem:(id)arg3 owner:(id)arg4;
- (id)navigationDocument;
- (id)rootURL;
- (void).cxx_destruct;
- (id)tabBarItem;
- (id)identifier;
- (void)dealloc;

@end
