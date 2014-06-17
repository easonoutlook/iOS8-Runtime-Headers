/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUIModalDocumentController;

@interface SKUIJSModalDocumentController : IKJSObject <SKUIJSModalDocumentController> {
    SKUIModalDocumentController *_modalDocumentController;
}

@property(retain,readonly) NSArray * documents;


- (void)pushDocument:(id)arg1 :(id)arg2;
- (id)initWithAppContext:(id)arg1 modalDocumentController:(id)arg2;
- (id)documents;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void).cxx_destruct;

@end