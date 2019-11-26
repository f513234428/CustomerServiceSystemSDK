#
# Be sure to run `pod lib lint CustomerServiceSystemDemo.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CustomerServiceSystemDemo'
  s.version          = '0.1.0'
  s.summary          = 'A short description of CustomerServiceSystemDemo.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/f513234428/CustomerServiceSystemDemo'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'f513234428' => '513234428@qq.com' }
  s.source           = { :git => 'https://github.com/f513234428/CustomerServiceSystemDemo.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'CustomerServiceSystemDemo/Classes/**/*'
  
   s.resource_bundles = {
     'CustomerServiceSystemDemo' => ['CustomerServiceSystemDemo/Classes/MQTTLibBundle.bundle']
   }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
   s.dependency 'AFNetworking'
   s.dependency 'MQTTClient'
   s.dependency 'SDWebImage'
   s.dependency 'AvoidCrash', '~> 2.5.2'
   s.dependency 'ProgressHUD'
   s.dependency 'IQKeyboardManager'
end
