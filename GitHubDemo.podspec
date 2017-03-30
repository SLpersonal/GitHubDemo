Pod::Spec.new do |s|
    s.name         = 'GitHubDemo'
    s.version      = '1.0.0'
    s.summary      = 'a component of photo browser on iOS'
    s.homepage     = 'https://github.com/SLpersonal/GitHubDemo'
    s.description  = <<-DESC
                                      It is a component for ios photo browser,written by Objective-C.
                   DESC
    s.license      = 'MIT'
    s.authors      = {'SL' => '412499326@qq.com'}
    s.platform     = :ios, '8.0'
    s.source       = {:git => 'https://github.com/SLpersonal/GitHubDemo.git', :tag => s.version}
    s.source_files = 'GitHubDemo/GitHubDemo/TimerLabel/*.{h,m}'
    s.requires_arc = true
end
