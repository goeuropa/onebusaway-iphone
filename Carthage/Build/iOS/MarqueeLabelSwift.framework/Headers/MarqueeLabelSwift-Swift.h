// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import QuartzCore;
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface CAMediaTimingFunction (SWIFT_EXTENSION(MarqueeLabelSwift))
@end

@class NSCoder;
@class UIWindow;
@class CAAnimation;
@class CALayer;
@class UIGestureRecognizer;
@class UIView;
@class NSAttributedString;
@class UIFont;
@class UIColor;

SWIFT_CLASS("_TtC17MarqueeLabelSwift12MarqueeLabel")
@interface MarqueeLabel : UILabel <CAAnimationDelegate>
/**
  Specifies the animation curve used in the scrolling motion of the labels.
  Allowable options:
  <ul>
    <li>
      \code
      UIViewAnimationOptionCurveEaseInOut
      \endcode
    </li>
    <li>
      \code
      UIViewAnimationOptionCurveEaseIn
      \endcode
    </li>
    <li>
      \code
      UIViewAnimationOptionCurveEaseOut
      \endcode
    </li>
    <li>
      \code
      UIViewAnimationOptionCurveLinear
      \endcode
    </li>
  </ul>
  Defaults to \code
  UIViewAnimationOptionCurveEaseInOut
  \endcode.
*/
@property (nonatomic) UIViewAnimationCurve animationCurve;
/**
  A boolean property that sets whether the \code
  MarqueeLabel
  \endcode should behave like a normal \code
  UILabel
  \endcode.
  When set to \code
  true
  \endcode the \code
  MarqueeLabel
  \endcode will behave and look like a normal \code
  UILabel
  \endcode, and  will not begin any scrolling animations.
  Changes to this property take effect immediately, removing any in-flight animation as well as any edge fade. Note that \code
  MarqueeLabel
  \endcode
  will respect the current values of the \code
  lineBreakMode
  \endcode and \code
  textAlignment
  \endcodeproperties while labelized.
  To simply prevent automatic scrolling, use the \code
  holdScrolling
  \endcode property.
  Defaults to \code
  false
  \endcode.
  seealso:
  holdScrolling
  seealso:
  lineBreakMode
  @warning The label will not automatically scroll when this property is set to \code
  true
  \endcode.
  @warning The UILabel default setting for the \code
  lineBreakMode
  \endcode property is \code
  NSLineBreakByTruncatingTail
  \endcode, which truncates
  the text adds an ellipsis glyph (…). Set the \code
  lineBreakMode
  \endcode property to \code
  NSLineBreakByClipping
  \endcode in order to avoid the
  ellipsis, especially if using an edge transparency fade.
*/
@property (nonatomic) BOOL labelize;
/**
  A boolean property that sets whether the \code
  MarqueeLabel
  \endcode should hold (prevent) automatic label scrolling.
  When set to \code
  true
  \endcode, \code
  MarqueeLabel
  \endcode will not automatically scroll even its text is larger than the specified frame,
  although the specified edge fades will remain.
  To set \code
  MarqueeLabel
  \endcode to act like a normal UILabel, use the \code
  labelize
  \endcode property.
  Defaults to \code
  false
  \endcode.
  seealso:
  labelize
  @warning The label will not automatically scroll when this property is set to \code
  true
  \endcode.
*/
@property (nonatomic) BOOL holdScrolling;
/**
  A boolean property that sets whether the \code
  MarqueeLabel
  \endcode should only begin a scroll when tapped.
  If this property is set to \code
  true
  \endcode, the \code
  MarqueeLabel
  \endcode will only begin a scroll animation cycle when tapped. The label will
  not automatically being a scroll. This setting overrides the setting of the \code
  holdScrolling
  \endcode property.
  Defaults to \code
  false
  \endcode.
  @warning The label will not automatically scroll when this property is set to \code
  false
  \endcode.
  seealso:
  holdScrolling
*/
@property (nonatomic) BOOL tapToScroll;
/**
  A read-only boolean property that indicates if the label’s scroll animation has been paused.
  seealso:
  pauseLabel
  seealso:
  unpauseLabel
*/
@property (nonatomic, readonly) BOOL isPaused;
/**
  A boolean property that indicates if the label is currently away from the home location.
  The “home” location is the traditional location of \code
  UILabel
  \endcode text. This property essentially reflects if a scroll animation is underway.
*/
@property (nonatomic, readonly) BOOL awayFromHome;
@property (nonatomic) CGFloat scrollDuration;
@property (nonatomic) CGFloat scrollRate;
/**
  A buffer (offset) between the leading edge of the label text and the label frame.
  This property adds additional space between the leading edge of the label text and the label frame. The
  leading edge is the edge of the label text facing the direction of scroll (i.e. the edge that animates
  offscreen first during scrolling).
  Defaults to \code
  0
  \endcode.
  note:
  The value set to this property affects label positioning at all times (including when \code
  labelize
  \endcode is set to \code
  true
  \endcode),
  including when the text string length is short enough that the label does not need to scroll.
  note:
  For Continuous-type labels, the smallest value of \code
  leadingBuffer
  \endcode, \code
  trailingBuffer
  \endcode, and \code
  fadeLength
  \endcode
  is used as spacing between the two label instances. Zero is an allowable value for all three properties.
  seealso:
  trailingBuffer
*/
@property (nonatomic) CGFloat leadingBuffer;
/**
  A buffer (offset) between the trailing edge of the label text and the label frame.
  This property adds additional space (buffer) between the trailing edge of the label text and the label frame. The
  trailing edge is the edge of the label text facing away from the direction of scroll (i.e. the edge that animates
  offscreen last during scrolling).
  Defaults to \code
  0
  \endcode.
  note:
  The value set to this property has no effect when the \code
  labelize
  \endcode property is set to \code
  true
  \endcode.
  note:
  For Continuous-type labels, the smallest value of \code
  leadingBuffer
  \endcode, \code
  trailingBuffer
  \endcode, and \code
  fadeLength
  \endcode
  is used as spacing between the two label instances. Zero is an allowable value for all three properties.
  seealso:
  leadingBuffer
*/
@property (nonatomic) CGFloat trailingBuffer;
/**
  The length of transparency fade at the left and right edges of the frame.
  This propery sets the size (in points) of the view edge transparency fades on the left and right edges of a \code
  MarqueeLabel
  \endcode. The
  transparency fades from an alpha of 1.0 (fully visible) to 0.0 (fully transparent) over this distance. Values set to this property
  will be sanitized to prevent a fade length greater than 1/2 of the frame width.
  Defaults to \code
  0
  \endcode.
*/
@property (nonatomic) CGFloat fadeLength;
/**
  The length of delay in seconds that the label pauses at the completion of a scroll.
*/
@property (nonatomic) CGFloat animationDelay;
/**
  The read-only duration of the scroll animation (not including delay).
  \code
  The value of this property is calculated from the value set to the `speed` property. If a .duration value is
  used to set the label animation speed, this value will be equivalent.

  \endcode*/
@property (nonatomic, readonly) CGFloat animationDuration;
/**
  Returns a newly initialized \code
  MarqueeLabel
  \endcode instance with the specified scroll rate and edge transparency fade length.
  seealso:
  fadeLength
  \param frame A rectangle specifying the initial location and size of the view in its superview’s coordinates. Text (for the given font, font size, etc.) that does not fit in this frame will automatically scroll.

  \param pixelsPerSec A rate of scroll for the label scroll animation. Must be non-zero. Note that this will be the peak (mid-transition) rate for ease-type animation.

  \param fadeLength A length of transparency fade at the left and right edges of the \code
  MarqueeLabel
  \endcode instance’s frame.


  returns:
  An initialized \code
  MarqueeLabel
  \endcode object or nil if the object couldn’t be created.
*/
- (nonnull instancetype)initWithFrame:(CGRect)frame rate:(CGFloat)rate fadeLength:(CGFloat)fade OBJC_DESIGNATED_INITIALIZER;
/**
  Returns a newly initialized \code
  MarqueeLabel
  \endcode instance with the specified scroll rate and edge transparency fade length.
  seealso:
  fadeLength
  \param frame A rectangle specifying the initial location and size of the view in its superview’s coordinates. Text (for the given font, font size, etc.) that does not fit in this frame will automatically scroll.

  \param scrollDuration A scroll duration the label scroll animation. Must be non-zero. This will be the duration that the animation takes for one-half of the scroll cycle in the case of left-right and right-left marquee types, and for one loop of a continuous marquee type.

  \param fadeLength A length of transparency fade at the left and right edges of the \code
  MarqueeLabel
  \endcode instance’s frame.


  returns:
  An initialized \code
  MarqueeLabel
  \endcode object or nil if the object couldn’t be created.
*/
- (nonnull instancetype)initWithFrame:(CGRect)frame duration:(CGFloat)duration fadeLength:(CGFloat)fade OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/**
  Returns a newly initialized \code
  MarqueeLabel
  \endcode instance.
  The default scroll duration of 7.0 seconds and fade length of 0.0 are used.
  \param frame A rectangle specifying the initial location and size of the view in its superview’s coordinates. Text (for the given font, font size, etc.) that does not fit in this frame will automatically scroll.


  returns:
  An initialized \code
  MarqueeLabel
  \endcode object or nil if the object couldn’t be created.
*/
- (nonnull instancetype)initWithFrame:(CGRect)frame;
- (void)awakeFromNib;
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
- (void)willMoveToWindow:(UIWindow * _Nullable)newWindow;
- (void)didMoveToWindow;
- (CGSize)sizeThatFits:(CGSize)size;
- (void)animationDidStop:(CAAnimation * _Nonnull)anim finished:(BOOL)flag;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass;
- (void)drawLayer:(CALayer * _Nonnull)layer inContext:(CGContextRef _Nonnull)ctx;
- (void)restartForViewController:(NSNotification * _Nonnull)notification;
- (void)labelizeForController:(NSNotification * _Nonnull)notification;
- (void)animateForController:(NSNotification * _Nonnull)notification;
/**
  Overrides any non-size condition which is preventing the receiver from automatically scrolling, and begins a scroll animation.
  Currently the only non-size conditions which can prevent a label from scrolling are the \code
  tapToScroll
  \endcode and \code
  holdScrolling
  \endcode properties. This
  method will not force a label with a string that fits inside the label bounds (i.e. that would not automatically scroll) to begin a scroll
  animation.
  Upon the completion of the first forced scroll animation, the receiver will not automatically continue to scroll unless the conditions
  preventing scrolling have been removed.
  note:
  This method has no effect if called during an already in-flight scroll animation.
  seealso:
  restartLabel
*/
- (void)triggerScrollStart;
/**
  Immediately resets the label to the home position, cancelling any in-flight scroll animation, and restarts the scroll animation if the appropriate conditions are met.
  seealso:
  resetLabel
  seealso:
  triggerScrollStart
*/
- (void)restartLabel;
/**
  Resets the label text, recalculating the scroll animation.
  The text is immediately returned to the home position, and the scroll animation positions are cleared. Scrolling will not resume automatically after
  a call to this method. To re-initiate scrolling, use either a call to \code
  restartLabel
  \endcode or make a change to a UILabel property such as text, bounds/frame,
  font, font size, etc.
  seealso:
  restartLabel
*/
- (void)resetLabel;
/**
  Immediately resets the label to the home position, cancelling any in-flight scroll animation.
  The text is immediately returned to the home position. Scrolling will not resume automatically after a call to this method.
  To re-initiate scrolling use a call to \code
  restartLabel
  \endcode or \code
  triggerScrollStart
  \endcode, or make a change to a UILabel property such as text, bounds/frame,
  font, font size, etc.
  seealso:
  restartLabel
  seealso:
  triggerScrollStart
*/
- (void)shutdownLabel;
/**
  Pauses the text scrolling animation, at any point during an in-progress animation.
  note:
  This method has no effect if a scroll animation is NOT already in progress. To prevent automatic scrolling on a newly-initialized label prior to its presentation onscreen, see the \code
  holdScrolling
  \endcode property.
  seealso:
  holdScrolling
  seealso:
  unpauseLabel
*/
- (void)pauseLabel;
/**
  Un-pauses a previously paused text scrolling animation. This method has no effect if the label was not previously paused using \code
  pauseLabel
  \endcode.
  seealso:
  pauseLabel
*/
- (void)unpauseLabel;
- (void)labelWasTapped:(UIGestureRecognizer * _Nonnull)recognizer;
/**
  Called when the label animation is about to begin.
  The default implementation of this method does nothing. Subclasses may override this method in order to perform any custom actions just as
  the label animation begins. This is only called in the event that the conditions for scrolling to begin are met.
*/
- (void)labelWillBeginScroll;
/**
  Called when the label animation has finished, and the label is at the home position.
  The default implementation of this method does nothing. Subclasses may override this method in order to perform any custom actions jas as
  the label animation completes, and before the next animation would begin (assuming the scroll conditions are met).
  warning:
  This method will be called, and the \code
  finished
  \endcode parameter will be \code
  NO
  \endcode, when any property changes are made that would cause the label
  scrolling to be automatically reset. This includes changes to label text and font/font size changes.
  \param finished A Boolean that indicates whether or not the scroll animation actually finished before the completion handler was called.

*/
- (void)labelReturnedToHome:(BOOL)finished;
- (UIView * _Nonnull)viewForBaselineLayout;
@property (nonatomic, readonly, strong, getter=viewForLastBaselineLayout) UIView * _Nonnull forLastBaselineLayout;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) NSAttributedString * _Nullable attributedText;
@property (nonatomic, strong) UIFont * _Null_unspecified font;
@property (nonatomic, strong) UIColor * _Null_unspecified textColor;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
@property (nonatomic, strong) UIColor * _Nullable shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic, strong) UIColor * _Nullable highlightedTextColor;
@property (nonatomic, setter=setHighlighted:) BOOL isHighlighted;
@property (nonatomic, setter=setEnabled:) BOOL isEnabled;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) UIBaselineAdjustment baselineAdjustment;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
- (void)tintColorDidChange;
@end


@interface UIResponder (SWIFT_EXTENSION(MarqueeLabelSwift))
@end

#pragma clang diagnostic pop
