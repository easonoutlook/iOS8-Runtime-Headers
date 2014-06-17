/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, NSString, NSArray;

@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerViewController> {
    unsigned int _documentPickerMode;
    NSURL *_originalURL;
    NSArray *_validTypes;
    NSString *_providerIdentifier;
    NSURL *_documentStorageURL;
}

@property unsigned int documentPickerMode;
@property(copy) NSURL * originalURL;
@property(copy) NSArray * validTypes;
@property(copy) NSString * providerIdentifier;
@property(copy) NSURL * documentStorageURL;

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;

- (id)documentStorageURL;
- (id)providerIdentifier;
- (id)validTypes;
- (id)originalURL;
- (void)prepareForDocumentSelectionInMode:(unsigned int)arg1;
- (void)dismissGrantingAccessToURL:(id)arg1;
- (void)prepareForPresentationInMode:(unsigned int)arg1;
- (void)_setProviderIdentifier:(id)arg1;
- (void)_setDocumentStorageURL:(id)arg1;
- (void)_setUploadURL:(id)arg1;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(id)arg2;
- (void)_setAuxiliaryOptions:(id)arg1;
- (unsigned int)documentPickerMode;
- (void)_setUploadURL:(id)arg1 withSandboxExtension:(id)arg2;
- (void)_setPickerMode:(unsigned int)arg1;
- (void)_setPickableTypes:(id)arg1;
- (void)_showDefaultPicker;
- (void)dealloc;

@end
