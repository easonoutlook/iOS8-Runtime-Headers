/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAXSafeCategoryBundle.dylib
 */

@class NSString;

@interface UIAccessibilitySafeCategory : NSObject  {
}

@property(copy) NSString * accessibilityIdentifier;

+ (void)_installSafeCategoryOnClassNamed:(id)arg1;
+ (void)safeCategoryAddDependenciesToCollection:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(BOOL)arg2;
+ (void)_addCategoryMethod:(struct objc_method { }*)arg1 toClass:(Class)arg2 isClass:(BOOL)arg3;
+ (id)_installLocalValidationMethodOnClassNamed:(id)arg1;
+ (id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(BOOL)arg2;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (id)_installSafeCategoryValidationMethod;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;


@end
