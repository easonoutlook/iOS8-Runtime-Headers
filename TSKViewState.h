/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPObject;

@interface TSKViewState : TSPObject  {
    TSPObject *_viewStateRoot;
}

@property(retain) TSPObject * viewStateRoot;

+ (id)viewStateWithRoot:(id)arg1 context:(id)arg2;

- (void)dealloc;
- (id)viewStateRoot;
- (id)initWithViewStateRoot:(id)arg1 context:(id)arg2;
- (void)setViewStateRoot:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;

@end
