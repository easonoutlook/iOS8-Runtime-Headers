/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSString;

@interface IKGridElement : IKCollectionElement  {
    BOOL _paged;
}

@property(readonly) unsigned int columnCount;
@property(readonly) NSString * rowHeight;
@property(getter=isPaged,readonly) BOOL paged;
@property(readonly) unsigned int rowCount;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (unsigned int)rowCount;
- (BOOL)isPaged;
- (unsigned int)columnCount;
- (id)rowHeight;

@end
