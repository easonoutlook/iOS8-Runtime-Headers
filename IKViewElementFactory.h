/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKAppContext, IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject  {
    struct { 
        unsigned int sparse : 1; 
        unsigned int parsingUpdatedTree : 1; 
        unsigned int parsingReorderedSiblings : 1; 
    } _parsingFlags;
    IKViewElementStyleFactory *_styleFactory;
    unsigned int _itmlIDSequence;
    IKAppContext *_appContext;
}

@property(retain) IKViewElementStyleFactory * styleFactory;
@property unsigned int itmlIDSequence;
@property IKAppContext * appContext;
@property(getter=isSparse) BOOL sparse;

+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned int)arg3;
+ (unsigned int)elementTypeByTagName:(id)arg1;
+ (id)elementsForDocumentElement:(id)arg1 sparse:(BOOL)arg2 appContext:(id)arg3;
+ (void)initialize;

- (void)setStyleFactory:(id)arg1;
- (id)elementForDOMElement:(id)arg1 parent:(id)arg2;
- (id)appContext;
- (id)styleFactory;
- (BOOL)isSparse;
- (unsigned int)itmlIDSequence;
- (void)setSparse:(BOOL)arg1;
- (void)setItmlIDSequence:(unsigned int)arg1;
- (void)setAppContext:(id)arg1;
- (void).cxx_destruct;

@end
